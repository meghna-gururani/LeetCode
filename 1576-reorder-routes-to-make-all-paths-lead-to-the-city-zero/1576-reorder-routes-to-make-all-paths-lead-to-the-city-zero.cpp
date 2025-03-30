class Solution {
public:
   int count=0;
   vector<int>visited;
   vector<vector<pair<int,int>>>adj;

   void dfs(int node){
    visited[node]=1;
    for(auto [it,isdirected]:adj[node]){
        if(!visited[it]){
            if(isdirected){
                count++;
            }
            dfs(it);
        }
     }
   }
    int minReorder(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        visited.resize(n,0);
        for(int i=0;i<connections.size();i++){
            int u=connections[i][0];
            int v=connections[i][1];
            adj[u].push_back(make_pair(v,1));
            adj[v].push_back(make_pair(u,0));
        }
        dfs(0);
        return count;
    }
};