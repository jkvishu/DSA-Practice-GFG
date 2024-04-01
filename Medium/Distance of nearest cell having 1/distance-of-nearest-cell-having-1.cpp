//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n=grid.size();
	    int m=grid[0].size();
	    queue<pair<pair<int,int>,int>>q;
	    vector<vector<int>>ans(n,vector<int>(m));
	    vector<vector<bool>>vis(n,vector<bool>(m,false));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1)
	            {
	                q.push({{i,j},0});
	                vis[i][j]=1;
	            }
	        }
	    }
        int row[] = {-1, 0, +1, 0};
        int col[] = {0, +1, 0, -1};
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nr=row[i]+it.first.first;
                int nc=col[i]+it.first.second;
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==0&&vis[nr][nc]==false){
                    vis[nr][nc]=true;
                    ans[nr][nc]=it.second+1;
                    q.push({{nr,nc},it.second+1});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans[i][j]=0;
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
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends