class Solution {
public:
    int f(int s, int i, vector<int>& nums, vector<int>& dp){
        //base case   in last question i<0 tha but here  starting idx get change so ye s h 
        // s= 0 for first and s=1 for second
        if(i<s) return 0;

        if(dp[i] != -1) return dp[i];

        int take = nums[i] + f(s, i-2, nums, dp);
        int notTake = f(s, i-1, nums, dp);

        return dp[i] = max(take, notTake);     
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> dp1(n+1, -1);
        vector<int> dp2(n+1, -1);

        return max(f(0, n-2, nums, dp1), f(1, n-1, nums, dp2));
    }
};