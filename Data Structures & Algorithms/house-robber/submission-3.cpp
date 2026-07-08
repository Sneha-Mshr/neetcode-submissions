class Solution {
public:
    int dfs(vector<int>& nums,vector<int>&dp,int i){

        if(i<0) return 0;

        if(dp[i]!=-1) return dp[i];
        int rob = nums[i]+ dfs(nums,dp,i-2);
        int notRob = dfs(nums,dp,i-1);
        dp[i]= max(rob,notRob);
        return dp[i];

    }
    int rob(vector<int>& nums) {
       int n=nums.size();
       if (n == 0) return 0;
       vector<int>dp(n,-1);
       return dfs(nums,dp,n-1);
    }
};
