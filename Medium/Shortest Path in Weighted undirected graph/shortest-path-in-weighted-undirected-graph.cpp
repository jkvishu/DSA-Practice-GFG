//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        // Striver OP
        // ✅😏💯🤝
        vector<pair<int,int>>adj[n+1];
        for(auto x:edges){
            adj[x[0]].push_back({x[1],x[2]});
            adj[x[1]].push_back({x[0],x[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,1});
        vector<int>dis(n+1,1e9),par(n+1);
        for(int i=1;i<=n;i++)
        {
            par[i]=i;
        }
        dis[1]=0;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            for(auto x:adj[it.second]){
                int ew=x.second;
                int node=x.first;
                if(ew+it.first<dis[node]){
                    par[node]=it.second;
                    dis[node]=ew+it.first;
                    pq.push({dis[node],node});
                }
            }
        }
        if(dis[n]==1e9)
        return {-1};
        vector<int>ans;
        int node=n;
        while(par[node]!=node){
            ans.push_back(node);
            node=par[node];
        }
        ans.push_back(1);
        ans.push_back(dis[n]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
            mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
            mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        int ans = 0;
        for (int i = 2; i < res.size(); i++) {
            ans += mp[{res[i], res[i - 1]}];
        }
        if (ans == res[0]) {

        } else if (res.size() == 1 && res[0] == -1)
            ans = res[0];
        else
            ans = -2;
        cout << ans << endl;
    }
}

// } Driver Code Ends