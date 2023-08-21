//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& m) {
        // Code here
        // POTD ✅😏💯
         int n=m.size();
        int k=m[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                int count=0;
                if(m[i][j]==1)
                {
                    //left
                    if(j-1>=0&&m[i][j-1]==0)count++;
                    //right
                    if(j+1<k&&m[i][j+1]==0)count++;
                    //down
                    if(i+1<n&&m[i+1][j]==0)count++;
                    //up
                    if(i-1>=0&&m[i-1][j]==0)count++;
                    //left-up
                    if(j-1>=0&&i-1>=0&&m[i-1][j-1]==0)count++;
                    //up-right
                    if(j+1<k&&i-1>=0&&m[i-1][j+1]==0)count++;
                    //right-down
                    if(j+1<k&&i+1<n&&m[i+1][j+1]==0)count++;
                    //left-down
                    if(j-1>=0&&i+1<n&&m[i+1][j-1]==0)count++;
                    if(count>0&&count%2==0)ans++;
                                    
                    
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
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends