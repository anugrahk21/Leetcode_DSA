class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;

        // Use a 'j' pointer, or fast-runner, to iterate through the vector.
        // The 'j' pointer checks for unique elements. It starts at index 1 because the element at index 0 is always unique relative to itself.
        for (int j = 1; j < nums.size(); ++j) {
            // Check if the element at the 'j' pointer is different from the element at the 'i' pointer.
            // Since the array is sorted, this is how we find the next unique element.
            if (nums[j] != nums[i]) {
                // If a unique element is found, we first increment the 'i' pointer.
                // This moves the "unique" boundary forward to make space for the new unique element.
                i = i + 1;
                // Then, we place the new unique element found by 'j' into the position of 'i'.
                // This overwrites a duplicate element that was previously in this spot.
                nums[i] = nums[j];
            }
        }

        // The original code has a bug here. It returns `nums.size()`, which is incorrect.
        // After the loop, `i` is the index of the last unique element.
        // The total number of unique elements is `i + 1`.
        return i + 1;
    }
};