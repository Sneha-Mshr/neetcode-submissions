class Solution {
public:
    // slightly optimized
    vector<int> twoSum(vector<int>& nums, int tgt) {
        int n=nums.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            int y=tgt-nums[i];
            if(mp.find(y)!=mp.end()) return {mp[y],i};
            mp[nums[i]]=i;
        }
        return {};
    }
};