//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     void find(int src,int vis[],vector<pair<int,int>>adj[],stack<int>&s){
         vis[src]=1;
         for(auto it:adj[src]){
             int x=it.first;
             if(vis[x]==0)
             find(x,vis,adj,s);
         }
         s.push(src);
     }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<int>ans(N,INT_MAX);
        vector<pair<int,int>>adj[N];
        int vis[N]={0};
        stack<int>s;
        for(int i=0;i<M;i++){
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
        for(int i=0;i<N;i++){
            if(vis[i]==0)
            find(i,vis,adj,s);
        }
        while(s.top()){
            ans[s.top()]=-1;
            s.pop();
        }
        ans[s.top()]=0;
        while(!s.empty()){
            int k=s.top();
            s.pop();
            for(auto x:adj[k]){
                int vertex=x.first;
                int weight=x.second;
                ans[vertex]=min(ans[k]+weight,ans[vertex]);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends