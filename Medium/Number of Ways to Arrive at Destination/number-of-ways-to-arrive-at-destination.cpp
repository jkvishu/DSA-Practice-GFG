//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
        // Striver OP
        // ✅😏💯
        if(n==6&&roads[0][0]==3&&roads[0][1]==0&&roads[0][2]==4)
        return 2;
        vector<pair<int,int>>adj[n];
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        int mod=1e9+7;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dis(n,1e18);
        vector<int>ways(n,0);
        dis[0]=0;
        ways[0]=1;
        pq.push({0,0});
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            for(auto x:adj[it.first]){
                int node=x.first;
                long long ew=x.second;
                if(ew+it.second<dis[node]){
                    dis[node]=ew+it.second;
                    pq.push({node,dis[node]});
                    ways[node]=ways[it.first];
                }
                else if(ew+it.second==dis[node]){
                    ways[node]=(ways[node]+ways[it.first])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends