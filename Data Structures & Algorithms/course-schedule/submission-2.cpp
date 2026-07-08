class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pq) {
        vector<vector<int>>adj(n);
        for(int i=0;i<pq.size();i++){
           int u=pq[i][0];
           int v=pq[i][1];
           adj[u].push_back(v);
        }
        vector<int>inDegree(n,0);
        int cnt =0;
       
        queue<int>q;
        // making indegree
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                inDegree[it]++;
            }
        }
        // push in the queue if degree is 0
        for(int i=0;i<n;i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node]){
                inDegree[it]--;
                if(inDegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(cnt==n) return true;
        return false;

    }
};