//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool find(int k,int vis[],vector<int> adj[]){
        queue<int>q;
        q.push(k);
        while(!q.empty()){
            int l=q.front();
            q.pop();
            if(vis[l]==true)
            return true;
            vis[l]=true;
            for(auto x:adj[l]){
                if(vis[x]==0)
                q.push(x);
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // BFS approach 
        // ✅💯😏
        int vis[V+1]={0};
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(find(i,vis,adj))
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