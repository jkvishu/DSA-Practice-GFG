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
        // ✅😏💯
        // Striver OP
        queue<pair<int,pair<int,int>>>pq;
        int dlrow[]={-1,0,+1,0};
        int dlcol[]={0,+1,0,-1};
        int n=grid.size();
        int m=grid[0].size();
        int ck[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                pq.push({0,{i,j}});
                ck[i][j]=2;
                }
                else{
                    ck[i][j]=0;
                }
            }
        }
        int ans=0;
        while(!pq.empty()){
            auto it=pq.front();
            pq.pop();
            ans=max(ans,it.first);
            for(int i=0;i<=3;i++){
                    int nr=dlrow[i]+it.second.first;
                    int nc=dlcol[i]+it.second.second;
                    if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&ck[nr][nc]==0){
                        ck[nr][nc]=2;
                        pq.push({it.first+1,{nr,nc}});
                    }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ck[i][j]==0&&grid[i][j]==1)
                return -1;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends