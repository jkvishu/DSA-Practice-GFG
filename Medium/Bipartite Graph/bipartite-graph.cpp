//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool ck(int i,vector<int>adj[],vector<int>&col){
	    queue<int>q;
	    q.push(i);
	    while(!q.empty()){
	        auto it=q.front();
	        q.pop();
	        for(auto x:adj[it]){
	            if(col[x]==-1){
	                col[x]=!col[it];
	                q.push(x);
	            }
	            else if(col[x]==col[it])
	            return false;
	        }
	    }
	    return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    // ✅💯😏🤝
	    // Striver OP
	   vector<int>col(V,-1);
	   for(int i=0;i<V;i++){
	       if(col[i]==-1){
	           if(ck(i,adj,col)==false)
	           return false;
	       }
	   }
	   return true;
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
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends