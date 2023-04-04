//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int t=0; 
    void dfs(int parent,int src,int lv[],int tv[],vector<bool>&vis,vector<bool>&mark,vector<int>adj[]){
        vis[src]=true;
        int child=0;
        lv[src]=tv[src]=t;
        t++;
        for(auto x:adj[src]){
            if(x==parent)
            continue;
            if(!vis[x]){
                dfs(src,x,lv,tv,vis,mark,adj);
                lv[src]=min(lv[src],lv[x]);
                if(lv[x]>=tv[src]&&parent!=-1)
                mark[src]=true;
                child++;
            }
            else{
                lv[src]=min(lv[src],tv[x]);
            }
        }
        if(child>1&&parent==-1)
        mark[src]=true;
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        // ✅💯🤝🥵👀
        t=0;
        vector<bool>vis(V,false);
        int lv[V];
        int tv[V];
        vector<bool>mark(V,false);
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(-1,i,lv,tv,vis,mark,adj);
            }
        }
        for(int i=0;i<V;i++){
            if(mark[i]==true)
            ans.push_back(i);
        }
        if(ans.size()==0)
        return {-1};
        return ans;
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
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends