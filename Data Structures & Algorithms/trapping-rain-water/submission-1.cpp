class Solution {
public:
    int trap(vector<int>& ht) {
         int n = ht.size();
        vector<int>lm(n);
        vector<int>rm(n);
        lm[0]=ht[0];
        for(int i=1;i<n;i++) lm[i]=max(lm[i-1],ht[i]);

        rm[n-1]=ht[n-1];
        for(int i=n-2;i>=0;i--) rm[i]=max(rm[i+1],ht[i]);

        int ans=0;
        for(int i=0;i<n;i++){
            int a = min(lm[i],rm[i])-ht[i];
            if(a<0) continue;
            else ans+=a;
        }
        return ans;
    }
};
