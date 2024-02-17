//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int mod=1e9+7;
class Solution {
  public:
    int totalWays(int n, int m, vector<vector<int>>& grid) {
        // Code here
        // Direct optimal solution because of Striver DP playlist
        // 17/02/2024
        // ✅😏💯
        if(grid[0][0]==1||grid[n-1][m-1]==1)
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
                    if(j>0&&grid[i][j-1]==0)
                    left=temp[j-1];
                    if(i>0&&grid[i-1][j]==0)
                    up=dp[j];
                    temp[j]=(left+up)%mod;
                }
            }
            for(int k=0;k<m;k++){
                dp[k]=temp[k];
            }
        }
        return dp[m-1]%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends