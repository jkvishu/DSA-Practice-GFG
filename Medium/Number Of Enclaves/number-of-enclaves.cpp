//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   void dfs(vector<vector<int>> &mat,vector<vector<bool>>&vis,int i,int j){
        vis[i][j]=1;
        int row[] = {-1, 0, +1, 0};
        int col[] = {0, +1, 0, -1};
        int n=mat.size();
        int m=mat[0].size();
        for(int k=0;k<4;k++){
            int nr=row[k]+i;
            int nc=col[k]+j;
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&mat[nr][nc]==1&&vis[nr][nc]==false){
            vis[nr][nc]=true;
            dfs(mat,vis,nr,nc);
            }
        }
    }
    int numberOfEnclaves(vector<vector<int>> &mat) {
        // Code here
        // ✅😏💯
        int n=mat.size();
        int m=mat[0].size();
         vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            if(mat[i][0]==1&&vis[i][0]==0){
                dfs(mat,vis,i,0);
            }
        }
        for(int i=0;i<m;i++){
            if(mat[n-1][i]==1&&vis[n-1][i]==0){
                dfs(mat,vis,n-1,i);
            }
        }
        for(int i=n-1;i>=0;i--){
            if(mat[i][m-1]==1&&vis[i][m-1]==0){
                dfs(mat,vis,i,m-1);
            }
        }
        for(int i=m-1;i>=0;i--){
            if(mat[0][i]==1&&vis[0][i]==0){
                dfs(mat,vis,0,i);
            }
        }
        int ans=0;
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(mat[i][j]==1&&vis[i][j]==0)
                ans++;
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
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends