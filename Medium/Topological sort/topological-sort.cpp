//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	/*vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    // Using Kahn's BFS Algorithm
	    // 🤝✅💯
	    vector<int>ans;
	    int ind[V]={0};
	    for(int i=0;i<V;i++){
	        for(auto x:adj[i]){
	            ind[x]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(ind[i]==0)
	        q.push(i);
	    }
	    while(!q.empty()){
	        int k=q.front();
	        q.pop();
	        ans.push_back(k);
	        for(auto x:adj[k]){
	            ind[x]--;
	            if(ind[x]==0)
	            q.push(x);
	        }
	    }
	    return ans;
	}*/
	void find(int src,stack<int>&s,vector<int>adj[],int vis[]){
	    vis[src]=1;
	    for(auto x:adj[src]){
	        if(vis[x]==0)
	        find(x,s,adj,vis);
	    }
	    s.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    //Using Kahn's DFS Algorithm.
	    //🤝✅💯
	    stack<int>s;
	    vector<int>ans;
	    int vis[V]={0};
	    for(int i=0;i<V;i++){
	        if(vis[i]==0)
	        find(i,s,adj,vis);
	    }
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends