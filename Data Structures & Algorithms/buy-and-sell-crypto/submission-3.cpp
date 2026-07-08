class Solution {
public:
    int maxProfit(vector<int>& pc) {
        int n=pc.size();
        int buy = pc[0];
        int ans = 0;
        for(int i=1;i<n;i++){
            buy = min(buy,pc[i-1]);
            ans = max(ans,pc[i]-buy);
        }
        return ans; 
    }
};
