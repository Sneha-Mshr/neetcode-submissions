class Solution {
public:
    int solve(int n, vector<int>& dp) {
        // base cases
        if (n < 3) return n;

        // if already computed, return stored value
        if (dp[n] != -1) return dp[n];

        // store the result into dp (memoization)
        dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};
