//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
 
	public:
	int numberOfCells(int n, int m, int r, int c, int u, int d, vector<vector<char>> &mat)
	{
		// Your code goes here
		// ❌👀©
		if(mat[r][c]=='#')
    {
        return 0;
    }
    queue<vector<int>> q;
    q.push({r,c,u,d});
    mat[r][c] ='1';
     while(!q.empty())
     {
         auto x = q.front();
         q.pop();
         int i = x[0],j=x[1];
         int ups = x[2],ds=x[3];
         if(j-1>=0&&(mat[i][j-1]=='.'))
         {
             mat[i][j-1] ='1';
             q.push({i,j-1,ups,ds});
         }
         if(j+1<m&&(mat[i][j+1]=='.'))
         {
             mat[i][j+1] = '1';
             q.push({i,j+1,ups,ds});
         }
         if(i-1>=0&&(mat[i-1][j]=='.')&&(ups-1)>=0)
         {
             mat[i-1][j] = '1';
             q.push({i-1,j,ups-1,ds});
         }
         if(i+1<n&&(mat[i+1][j]=='.')&&(ds-1>=0))
         {
             mat[i+1][j] ='1';
             q.push({i+1,j,ups,ds-1});
         }
         
         
     }
     int cnt =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='1')
                {
                    cnt++;
                }
            }
        }
        return cnt;
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