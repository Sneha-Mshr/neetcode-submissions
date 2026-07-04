class Solution {
public:
     int maxi = 0;
     void dfs(vector<vector<int>>& gd ,int i,int j,int &cnt){
        // base case out of bond 
        if(i<0 or i>=gd.size() or j<0 or j>=gd[0].size())
        return;
        // already visited
        if(gd[i][j]!=1) return;
        // marking visisted
        gd[i][j]=0;
        cnt++;

        dfs(gd,i+1,j,cnt);
        dfs(gd,i-1,j,cnt);
        dfs(gd,i,j-1,cnt);
        dfs(gd,i,j+1,cnt);

    }
    int maxAreaOfIsland(vector<vector<int>>& gd) {
        int n=gd.size();
        int m=gd[0].size();

        int island =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(gd[i][j]==1) {
                    int cnt=0;
                    dfs(gd,i,j,cnt);
                    maxi = max(maxi,cnt);
                }
            }
        }
        return maxi;
    }
};
