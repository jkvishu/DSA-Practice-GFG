//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    // ✅😏💯
	    if(X==0)
	    return 0;
	    vector<bool>vis(V,false);
	    queue<int>q;
	    q.push(0);
	    int l=0;
	    int i=0;
	    int n=q.size();
	    while(!q.empty()){
	        int k=q.front();
	        q.pop();
	        if(k==X)
	        return l;
	        vis[k]=true;
	        for(auto x:adj[k]){
	            if(!vis[x]){
	                q.push(x);
	            }
	        }
	        i++;
	        if(i==n){
	        l++;
	        i=0;
	        n=q.size();
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends