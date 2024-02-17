//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int mod=1e9+7;
class Solution {
  public:
  /*
    int find(int n,int m,vector<vector<int>> &grid){
        if(n==0&&m==0)
        return 1;
        if(n<0||m<0)
        return 0;
        int left=0;
        int up=0;
        if(m-1>=0&&grid[n][m-1]==1)
        left=find(n,m-1,grid)%mod;
        if(n-1>=0&&grid[n-1][m]==1)
        up=find(n-1,m,grid)%mod;
        return (up+left)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        // recursive soluton
        // Brute force approach
        // ✅😏💯
        return find(n-1,m-1,grid)%mod;
    }
    int find(int n,int m,vector<vector<int>> &grid,vector<vector<int>> &dp){
        if(n==0&&m==0)
        return 1;
        if(n<0||m<0)
        return 0;
        if(dp[n][m]!=-1)
        return dp[n][m];
        int left=0;
        int up=0;
        if(m-1>=0&&grid[n][m-1]==1)
        left=find(n,m-1,grid,dp)%mod;
        if(n-1>=0&&grid[n-1][m]==1)
        up=find(n-1,m,grid,dp)%mod;
        return dp[n][m]=(up+left)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        // Optimized approach using memoization
        // ✅😏💯
        if(grid[0][0]==0||grid[n-1][m-1]==0)
        return 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return find(n-1,m-1,grid,dp)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        // Optimized approach using Tabulation
        // ✅😏💯
        if(grid[0][0]==0||grid[n-1][m-1]==0)
        return 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        dp[0][0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int left=0;
                int up=0;
                if(i==0&&j==0)
                continue;
                else{
                    if(j>0&&grid[i][j-1]==1)
                    left=dp[i][j-1];
                    if(i>0&&grid[i-1][j]==1)
                    up=dp[i-1][j];
                }
                dp[i][j]=(left+up)%mod;
            }
        }
        return dp[n-1][m-1];
    }
    */
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        // Most Optimized approach consist of space optimization.
        // ✅😏💯
        if(grid[0][0]==0||grid[n-1][m-1]==0)
        return 0;
        int dp[m];
        for(int i=0;i<m;i++){
            dp[i]=0;
        }
        for(int i=0;i<n;i++){
            int temp[m];
            for(int k=0;k<m;k++){
                temp[k]=0;
            }
            for(int j=0;j<m;j++){
                if(i==0&&j==0)
                temp[j]=1;
                else{
                    int left=0;
                    int up=0;
                    if(j>0&&grid[i][j-1]==1)
                    left=temp[j-1];
                    if(i>0&&grid[i-1][j]==1)
                    up=dp[j];
                    temp[j]=(left+up)%mod;
                }
            }
            for(int k=0;k<m;k++){
                dp[k]=temp[k];
            }
        }
        return dp[m-1];
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends