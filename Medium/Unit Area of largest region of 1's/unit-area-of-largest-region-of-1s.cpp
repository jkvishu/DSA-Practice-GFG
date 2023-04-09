//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    /*void dfs(int i,int j,vector<vector<int>>& grid,int n,int m,int &c){
        if(i>=n||i<0||j>=m||j<0||grid[i][j]==0)
        return;
        else{
            c++;
            grid[i][j]=0;
            dfs(i+1,j,grid,n,m,c);
            dfs(i-1,j,grid,n,m,c);
            dfs(i,j+1,grid,n,m,c);
            dfs(i,j-1,grid,n,m,c);
            dfs(i+1,j+1,grid,n,m,c);
            dfs(i-1,j-1,grid,n,m,c);
            dfs(i-1,j+1,grid,n,m,c);
            dfs(i+1,j-1,grid,n,m,c);
        }
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        // ✅💯😏😎
        // Time taken 0.29sec
        // if mutation of the matrix is allowed.
        int ans=INT_MIN;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=0;
                if(grid[i][j]==1)
                dfs(i,j,grid,n,m,c);
                ans=max(ans,c);
            }
        }
        return ans;
    }*/
    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &vis, int &count){
        vis[row][col] = 1;
        count++;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                int nrow = row+i;
                int ncol = col+j;
                if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                    dfs(nrow, ncol, grid, vis, count);
                }
            }
        }
    }
    int findMaxArea(vector<vector<int>>& grid) {
        //IF mutation of the matrix is not allowed.
        //✅💯🤝😏
        //Time taken 0.33sec
        int n = grid.size();
        int m = grid[0].size();
        int maxArea = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    int area = 0;
                    dfs(i, j, grid, vis, area);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
