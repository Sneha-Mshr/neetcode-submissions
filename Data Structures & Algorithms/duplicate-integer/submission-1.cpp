class Solution {
public:
//  approach1 - 1
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) return true;
        }
        return false;
    }
    // approach 2 can do using map ---
};