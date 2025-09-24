class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end()); //set can only have unique elements.
        return nums.size()!=s.size(); //return true if not equal(duplicates present).

    }
};