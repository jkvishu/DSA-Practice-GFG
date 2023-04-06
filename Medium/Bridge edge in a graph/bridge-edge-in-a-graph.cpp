//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    int timer=0;
    bool fans=false;
    void dfs(int parent,int src,vector<bool>&vis,vector<int> adj[],int lw[],int tc[],int c,int d){
        vis[src]=true;
        lw[src]=tc[src]=timer;
        timer++;
        for(auto x:adj[src]){
            if(x==parent) continue;
            if(!vis[x]){
                dfs(src,x,vis,adj,lw,tc,c,d);
                lw[src]=min(lw[src],lw[x]);
                if(lw[x]>tc[src])
                {
                    if(src==c&&x==d||src==d&&x==c)
                    fans=true;
                }
            }
            else{
                lw[src]=min(lw[src],lw[x]);
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        // ©❌©🤝👀
        vector<bool>vis(V,false);
        int lw[V];
        int tc[V];
        for(int i=0;i<V;i++){
            if(!vis[i])
            dfs(-1,i,vis,adj,lw,tc,c,d);
        }
        return fans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


// } Driver Code Ends