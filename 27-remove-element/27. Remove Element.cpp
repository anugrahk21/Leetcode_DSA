class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int noe=0;
        vector<int> abc;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=val){
                nums[noe]=nums[i];
                noe++;
            }
        };
        int n=noe;
        return n;
    }
};