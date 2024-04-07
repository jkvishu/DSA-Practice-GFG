//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool dfs(int node,vector<int> adj[],vector<bool>&vis,vector<bool>&path,vector<bool>&ck){
        vis[node]=1;
        path[node]=1;
        ck[node]=0;
        for(auto x:adj[node]){
            if(!vis[x]){
                ck[x]=0;
                if(dfs(x,adj,vis,path,ck))
                return true;
            }
            else if(x==node||path[x]==1)
            {
                ck[x]=0;
                return true;
            }
        }
        ck[node]=1;
        path[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        // Striver OP
        // ✅😏💯
        vector<bool>vis(V,0);
        vector<bool>path(V,0);
        vector<bool>ck(V,0);
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,adj,vis,path,ck);
            }
        }
        for(int i=0;i<V;i++){
            if(ck[i]==1)
            ans.push_back(i);
        }
        return ans;
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
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends