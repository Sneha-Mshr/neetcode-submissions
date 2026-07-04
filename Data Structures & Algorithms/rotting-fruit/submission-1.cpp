class Solution {
public:
// this is a qestion of multiple source bfs
    int di[4] = {1,0,-1,0};
    int dj[4] =  {0,1,0,-1};
    int orangesRotting(vector<vector<int>>& gd) {
        int n = gd.size();
        int m= gd[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(gd[i][j]==2) q.push({i,j});
                if(gd[i][j]==1) fresh++;
            }
        }
        if(fresh==0) return 0;
        int time=0;
        while(!q.empty()){
            int k = q.size();
            while(k--){
                auto it = q.front();
                int r = it.first;
                int c = it.second;
                q.pop();
                for (int i=0;i<4;i++){
                    int nr = r + di[i];
                    int nc = c + dj[i];
                    if(nr>=0 && nr<n && nc>=0 && nc<m && gd[nr][nc]==1){
                        q.push({nr,nc});
                        gd[nr][nc]=2;
                        fresh--;
                    }
                }
            }
            time++;
        }
    //Your code increments time after processing every BFS level,
    // including the last level where nothing new is rotted. 
    //That final increment doesn't correspond to any elapsed rotting time, 
    //so we subtract 1.
      return fresh==0? time-1:-1;
        
    }
};

