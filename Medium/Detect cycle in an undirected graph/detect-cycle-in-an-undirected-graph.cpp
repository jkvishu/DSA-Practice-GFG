//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    /*
    void dfs(int node,vector<int> adj[],vector<bool>&vis){
        vis[node]=true;
        for(auto x:adj[node]){
            dfs(x,adj,vis);
        }
        return;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // ✅😏💯
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==true)
            return true;
            else{
            dfs(i,adj,vis);
            }
        }
        return false;
    }
    */
    bool bfs(int src,vector<int> adj[],vector<bool>&vis){
        queue<pair<int,int>>q;
        q.push({src,-1});
        vis[src]=true;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            for(auto x:adj[it.first]){
                if(!vis[x]){
                    vis[x]=true;
                    q.push({x,it.first});
                }
                else if(x!=it.second)
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // ✅😏💯
        // BFS approach.
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(bfs(i,adj,vis))
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends