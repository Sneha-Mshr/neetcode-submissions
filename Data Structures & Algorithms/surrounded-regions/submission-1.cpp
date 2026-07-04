class Solution {
public:
    void dfs(vector<vector<char>>& bd,int i,int j,vector<vector<int>>&vis){
       int n=bd.size();
       int m=bd[0].size(); 
// checking for out of boundary
       if(i<0 or i>=n or j<0 or j>=m ) return;
// if not safe or already visited
       if(bd[i][j]!='O' or vis[i][j]==1) return;
//    markinig visisted
       vis[i][j]=1;

       dfs(bd,i+1,j,vis);
       dfs(bd,i-1,j,vis);
       dfs(bd,i,j+1,vis);
       dfs(bd,i,j-1,vis);
    }
    void solve(vector<vector<char>>& bd) {
        int n=bd.size();
        int m=bd[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
    // we call for all boundary "O"
    // first col and last col
        for(int i=0;i<n;i++){
            if(bd[i][0]=='O' && !vis[i][0]) dfs(bd,i,0,vis);
            if(bd[i][m-1]=='O' && !vis[i][m-1]) dfs(bd,i,m-1,vis);
        }
    // first row and last row
        for(int j=0;j<m;j++){
            if(bd[0][j]=='O' && !vis[0][j]) dfs(bd,0,j,vis);
            if(bd[n-1][j]=='O' && !vis[n-1][j]) dfs(bd,n-1,j,vis);
        }

    //  if still "O" which are not connected from boundary 
    // then check for the safe or not visited 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(bd[i][j]=='O' && !vis[i][j]) 
                bd[i][j]='X';
            }
        }
        
    }
};
