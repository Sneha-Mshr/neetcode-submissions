class Solution {
public:

    void dfs(vector<vector<int>>&adjL,int node,vector<int>&vis,int n){
        vis[node]=1;
        for(auto it:adjL[node]){
            if(!vis[it]) dfs(adjL,it,vis,n);
        }
    }
    int countComponents(int n, vector<vector<int>>& ed) {
        int m = ed.size();
        int cnt=0;
        vector<vector<int>>adjL(n);

        for(int i=0;i<m;i++){
            int u = ed[i][0];
            int v = ed[i][1];
            adjL[u].push_back(v);
            adjL[v].push_back(u);
        }
        
        vector<int>vis(n,0);

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adjL,i,vis,n);
                cnt++;

            }
        }
        return cnt;
    }
};
