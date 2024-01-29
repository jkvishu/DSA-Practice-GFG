//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:

        int f (string A, string B, string C, int n1, int n2, int n3,vector<vector<vector<int>>>&dp)
        {
            if(n1==0||n2==0||n3==0){
                return 0;
            }
            
            if(dp[n1][n2][n3]!=-1){
                return dp[n1][n2][n3];
            }
            
            if(A[n1-1]==B[n2-1] && B[n2-1]==C[n3-1]){
                return dp[n1][n2][n3] = 1 + f(A,B,C,n1-1,n2-1,n3-1,dp);
            }
            
            return dp[n1][n2][n3] = max(max(f(A,B,C,n1-1,n2,n3,dp),f(A,B,C,n1,n2-1,n3,dp)),f(A,B,C,n1,n2,n3-1,dp));
        }
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            //POTD
            //©👀
            vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));
            return f(A,B,C,n1,n2,n3,dp);    
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends