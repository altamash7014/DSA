class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int>q;
        vector<int>ans;
        int V = adj.size();
        vector<int>vis(V,0);
        q.push(0);
        vis[0] = true;
        while(q.size()>0){
            int u =q.front();
            q.pop();
            ans.push_back(u);
            for(int v: adj[u]){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }return ans;
        
    }
};