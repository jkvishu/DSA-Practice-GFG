//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool find(int vis[],int resc[],int src,vector<int>adj[]){
        vis[src]=1;
        resc[src]=1;
        for(auto x:adj[src]){
            if(vis[x]==0&&find(vis,resc,x,adj))
            return true;
            else if(resc[x]==1)
            return true;
        }
        resc[src]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        // 🤝👀🙄©
        int vis[V]={0};
        int resc[V]={0};
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(find(vis,resc,i,adj))
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends