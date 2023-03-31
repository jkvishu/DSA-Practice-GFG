//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])/* {
        // Code here
        // ✅💯🤝
        bool vis[V+1]={0};  
        vector<int>ans;
        queue<int>q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
                int k=q.front();
                q.pop();
                ans.push_back(k);
                for(auto x:adj[k]){
                    if(vis[x]==0){
                    vis[x]=1;
                    q.push(x);
                    }
                }
        }
        return ans;
    }*/
    {
        //Doing it again just for practice
        int vis[V]={0};
        queue<int>q;
        q.push(0);
        vector<int>ans;
        ans.push_back(0);
        vis[0]=1;
        while(!q.empty()){
            int k=q.front();
            q.pop();
            for(auto x:adj[k]){
                if(vis[x]==0){
                    ans.push_back(x);
                    q.push(x);
                    vis[x]=1;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends