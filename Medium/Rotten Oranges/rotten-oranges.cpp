//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        // ✅🤝💯👀
        // Striver OP
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>pq;
        int fcount=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                pq.push({{i,j},0});
                vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1)
                fcount++;
            }
        }
        int mxt=0;
        int c=0;
        while(!pq.empty()){
            int row=pq.front().first.first;
            int col=pq.front().first.second;
            int t=pq.front().second;
            mxt=max(mxt,t);
            pq.pop();
            int rown[]={-1,0,+1,0};
            int coln[]={0,+1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=row+rown[i];
                int ncol=col+coln[i];
                if(nrow<n&&nrow>=0&&ncol<m&&ncol>=0&&grid[nrow][ncol]==1&&vis[nrow][ncol]==0){
                    pq.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=2;
                    c++;
                }
            }
        }
        if(c!=fcount)
        return -1;
        return mxt;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends