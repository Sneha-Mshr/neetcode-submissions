class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
       priority_queue<pair<int,int>>pq;
       unordered_map<int,int>mp;
       for(auto it:nums) mp[it]++;

       for(auto it:mp){
        pq.push({it.second,it.first});
       }
       vector<int>ans;
       while(k--){
         int x=pq.top().second;
         ans.push_back(x);
         pq.pop();
       }
       return ans;
    }
};
