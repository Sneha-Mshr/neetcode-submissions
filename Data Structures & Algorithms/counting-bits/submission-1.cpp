class Solution {
public:
    int fun(int n){
        int cnt=0;
        while(n){
          n=n&(n-1);
          cnt++;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int x= fun(i);
            ans.push_back(x);
        }
        return ans;
    }
};
