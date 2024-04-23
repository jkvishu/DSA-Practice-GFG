//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> dest) {
        // code here
        // Striver OP
        // ✅😏💯
        int adjrow[]={-1,0,+1,0};
        int adjcol[]={0,+1,0,-1};
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dis(n,vector<int>(m,1e9));
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{source.first,source.second}});
        dis[source.first][source.second]=0;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            if(it.second.first==dest.first&&it.second.second==dest.second)
            return it.first;
            for(int i=0;i<4;i++){
                int nr=adjrow[i]+it.second.first;
                int nc=adjcol[i]+it.second.second;
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&1+it.first<dis[nr][nc]){
                    dis[nr][nc]=1+it.first;
                    q.push({1+it.first,{nr,nc}});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends