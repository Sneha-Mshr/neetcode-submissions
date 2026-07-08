class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pq) {
         vector<vector<int>>adj(n);
        for(int i=0;i<pq.size();i++){
           int u=pq[i][0];
           int v=pq[i][1];
           adj[v].push_back(u);
        }
        vector<int>inDegree(n,0);
        vector<int>ans;
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
            ans.push_back(node);
            for(auto it:adj[node]){
                inDegree[it]--;
                if(inDegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(ans.size()==n) return ans;
        return {};
    }
};