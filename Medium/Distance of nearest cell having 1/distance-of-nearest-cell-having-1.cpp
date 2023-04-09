//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
   /* int dfs1(int i,int j,vector<vector<int>>grid,int n,int m){
        if(i+1==n)
        return INT_MAX;
        int c=0;
        while(i<n&&grid[i][j]==0){
            c++;
            i++;
        }
        return c;
    }
    int dfs2(int i,int j,vector<vector<int>>grid,int n,int m){
        if(i==0)
        return INT_MAX;
        int c=0;
        while(i>=0&&grid[i][j]==0){
            c++;
            i--;
        }
        return c;
    }
    int dfs3(int i,int j,vector<vector<int>>grid,int n,int m){
        if(j==0)
        return INT_MAX;
        int c=0;
        while(j>=0&&grid[i][j]==0){
            c++;
            j--;
        }
        return c;
    }
    int dfs4(int i,int j,vector<vector<int>>grid,int n,int m){
        if(j+1==m)
        return INT_MAX;
        int c=0;
        while(j<m&&grid[i][j]==0){
            c++;
            j++;
        }
        return c;
    }
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    // ✅💯😏
	    // Brute force approach But gives TLE.
	    vector<vector<int>>ans;
	    vector<int>temp;
	    int n=grid.size();
	    int m=grid[0].size();
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            int k=INT_MAX;
	            if(grid[i][j]==0){
	                k=min(k,dfs1(i,j,grid,n,m));
	                k=min(k,dfs2(i,j,grid,n,m));
	                k=min(k,dfs3(i,j,grid,n,m));
	                k=min(k,dfs4(i,j,grid,n,m));
	                temp.push_back(k);
	            }
	            else
	            temp.push_back(0);
	        }
	        ans.push_back(temp);
	        temp.clear();
	    }
	    return ans;
	}*/
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    //Let's see an optimized approach USING BFS technique.
	    //Striver Jood explanation 
	    //🤝💯✅
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>>ans(n,vector<int>(m,0));
	    vector<vector<int>>vis(n,vector<int>(m,0));
	    queue<pair<pair<int,int>,int>>pq;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1){
	                pq.push({{i,j},0});
	                vis[i][j]=1;
	            }
	            else{
	                vis[i][j]=0;
	            }
	        }
	    }
	    int frow[]={-1,0,+1,0};
	    int fcol[]={0,+1,0,-1};
	    while(!pq.empty()){
	        int row=pq.front().first.first;
	        int col=pq.front().first.second;
	        int k=pq.front().second;
	        pq.pop();
	        ans[row][col]=k;
	        for(int i=0;i<4;i++){
	            int rrow=row+frow[i];
	            int ccol=col+fcol[i];
	            if(rrow<n&&rrow>=0&&ccol>=0&&ccol<m&&!vis[rrow][ccol]){
	                pq.push({{rrow,ccol},k+1});
	                vis[rrow][ccol]=1;
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