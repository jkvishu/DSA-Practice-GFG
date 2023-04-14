//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
 
	public:
	int numberOfCells(int n, int m, int r, int c, int u, int d, vector<vector<char>>&mat)
	{
	                //❌©👀
	    if(mat[r][c]=='#')
	        return 0;
	    int xd[4] = {1,-1,0,0};
	    int yd[4] = {0,0,1,-1};
	    vector<vector<pair<int,int>>>dp(n,vector<pair<int,int>>(m,{-1,-1}));
	    dp[r][c] = {u,d};
	    queue<pair<int,int>>qu;
	    qu.push({r,c});
	    while(!qu.empty())
	    {
	        int i = qu.front().first;
	        int j = qu.front().second;
	        qu.pop();
	        for(int k=0;k<4;k++)
	        {
	            int x = i+xd[k];
	            int y = j+yd[k];
	            
	            if(x>=0 && y>=0 && x<n && y<m && mat[x][y]!='#')
	            {
	                if(k==0 && dp[i][j].second>0 && dp[i][j].second-1>dp[x][y].second)
	                {
	                    dp[x][y] = {dp[i][j].first,dp[i][j].second-1};
	                    qu.push({x,y});
	                }
	                if(k==1 && dp[i][j].first>0 && dp[i][j].first-1>dp[x][y].first)
	                {
	                    dp[x][y] = {dp[i][j].first-1,dp[i][j].second};
	                    qu.push({x,y});
	                }
	                if((k==2 || k==3)&& (dp[x][y].first<dp[i][j].first || dp[x][y].second<dp[i][j].second))
	                {
	                    dp[x][y] = {dp[i][j].first,dp[i][j].second};
	                    qu.push({x,y});
	                }
	            }
	        }
	    }
	    
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(dp[i][j].first!=-1 && dp[i][j].second!=-1)
	                count++;
	        }
	    }
	    return count;
	}

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;

    while (t--)
    {
    	int n, m, r, c, u, d;
        cin >> n >> m >> r >> c >> u >> d;
        
        vector<vector<char>> mat(n, vector<char>(m, '.'));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < m; j++)
        	{
        		cin >> mat[i][j];
        	}
        }

      

        Solution obj;
        cout << obj.numberOfCells(n, m, r, c, u, d, mat) << "\n";
    
    }

    return 0;
}



// } Driver Code Ends