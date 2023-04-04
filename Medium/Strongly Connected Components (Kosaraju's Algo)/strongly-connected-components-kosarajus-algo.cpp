//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	void dfs(int src,vector<bool>&vis,vector<vector<int>>& adj,stack<int>&s){
	    vis[src]=true;
	    for(auto x:adj[src]){
	        if(!vis[x])
	        dfs(x,vis,adj,s);
	    }
	    s.push(src);
	}
	void dfs1(int src,vector<bool>&vis,vector<vector<int>>& adj){
	    vis[src]=true;
	    for(auto x:adj[src]){
	        if(!vis[x])
	        dfs1(x,vis,adj);
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        //✅🤝💯👀
        //Kosaraju's Algo Striver
        int ans=0;
        stack<int>s;
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i])
            dfs(i,vis,adj,s);
        }
        vector<vector<int>>Tadj(V);
        for(int i=0;i<V;i++){
            vis[i]=false;
            for(auto x:adj[i]){
                Tadj[x].push_back(i);
            }
        }
        while(!s.empty()){
            auto it=s.top();
            s.pop();
            if(!vis[it]){
                ans++;
                dfs1(it,vis,Tadj);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends