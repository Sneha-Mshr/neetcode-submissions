class Solution {
public:
    int maxArea(vector<int>& ht) {
        int n=ht.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<j){
            int x = j-i;
            int y = min(ht[i],ht[j]);
            ans = max(ans,x*y);
            if(y==ht[i]) i++;
            else j--;
        }
        return ans;
        
    }
};
