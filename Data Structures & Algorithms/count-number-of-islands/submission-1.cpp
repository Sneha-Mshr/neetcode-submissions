class Solution {
public:
    void dfs(vector<vector<char>>& gd,int i,int j){
        // base case out of bond 
        if(i<0 or i>=gd.size() or j<0 or j>=gd[0].size())
        return;
        // already visited
        if(gd[i][j]!='1') return;
        // marking visisted
        gd[i][j]='0';

        dfs(gd,i+1,j);
        dfs(gd,i-1,j);
        dfs(gd,i,j-1);
        dfs(gd,i,j+1);

    }
    int numIslands(vector<vector<char>>& gd) {
        int n=gd.size();
        int m=gd[0].size();

        int island =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(gd[i][j]=='1') {
                    dfs(gd,i,j);
                    island++;
                }
            }
        }
        return island;

    }
};
