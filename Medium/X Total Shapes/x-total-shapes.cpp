//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    /*void dfs(vector<vector<int>>&vis,vector<vector<char>>&grid,int i,int j,int n,int m){
        vis[i][j]=1;
        int setrow[4]={-1,0,1,0};
        int setcol[4]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int nrow=i+setrow[k];
            int ncol=j+setcol[k];
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&(!vis[nrow][ncol])&&grid[nrow][ncol]=='X'){
                dfs(vis,grid,nrow,ncol,n,m);
                vis[nrow][ncol]=1;
            }
        }
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        // ✅💯😏
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'&&!vis[i][j]){
                    ans++;
                    dfs(vis,grid,i,j,n,m);
                }
            }
        }
        return ans;
    }*/
    void dfs(vector<vector<char>>& grid,int i,int j,int n,int m){
        if(i>=n||i<0||j>=m||j<0||grid[i][j]=='O')
        return;
        else{
            grid[i][j]='O';
            dfs(grid,i+1,j,n,m);
            dfs(grid,i-1,j,n,m);
            dfs(grid,i,j+1,n,m);
            dfs(grid,i,j-1,n,m);
        }
    }
    int xShape(vector<vector<char>>& grid) 
    {
        //✅💯😏😎
        //Jood bolte bete papa bolo ha ha ha
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                    ans++;
                    dfs(grid,i,j,n,m);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends
