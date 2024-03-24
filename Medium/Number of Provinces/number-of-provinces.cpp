//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<int>adj[],vector<int>&vis,int node){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it])
            dfs(adj,vis,it);
        }
        return;
    }
    int numProvinces(vector<vector<int>> a, int V) {
        // code here
        // ✅😏💯
        // Done in first attempt
        vector<int>adj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(a[i][j]==1&&i!=j){
                adj[i].push_back(j);
                adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);
        int c=0;
        for(int i=0;i<V;i++){
            if(!vis[i])
            {
                c++;
                dfs(adj,vis,i);
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends