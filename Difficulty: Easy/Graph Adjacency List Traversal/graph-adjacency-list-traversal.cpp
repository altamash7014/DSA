class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        vector<vector<int>>l(V);
        int u,v;
        for(int i =0;i<edges.size();i++){
            u = edges[i].first;
            v = edges[i].second;
        
            l[u].push_back(v);
            l[v].push_back(u);
        }
        return l;
    }
};