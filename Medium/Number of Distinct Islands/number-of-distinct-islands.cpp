//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void bfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int n,int m,int i,int j,vector<pair<int,int>>&vs){
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int delrow[] = {-1,0,+1,0};
            int delcol[] = {0,+1,0,-1};
            for(int k=0;k<4;k++){
                    int mrow=row+delrow[k];
                    int mcol=col+delcol[k];
                    if(mrow>=0&&mrow<n&&mcol>=0&&mcol<m&&grid[mrow][mcol]==1&&vis[mrow][mcol]==0)
                    {
                        vis[mrow][mcol]=1;
                        q.push({mrow,mcol});
                        vs.push_back({mrow-i,mcol-j});
                    }
                }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        // ✅😏💯🤝
        // Striver OP
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]==0)
                {
                    vector<pair<int,int>>vs;
                    bfs(grid,vis,n,m,i,j,vs);
                    s.insert(vs);
                }
            }
        }
        return s.size();
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
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends