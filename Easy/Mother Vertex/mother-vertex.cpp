//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(int src,vector<int>adj[],vector<bool>&vis,int &c){
        vis[src]=true;
        for(auto x:adj[src]){
            if(!vis[x]){
                c++;
            dfs(x,adj,vis,c);
            }
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    //✅💯😏
	    for(int i=0;i<V;i++){
	        int c=0;
	        vector<bool>vis(V,false);
	        dfs(i,adj,vis,c);
	        if(c+1==V)
	        return i;
	    }
	    return -1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends