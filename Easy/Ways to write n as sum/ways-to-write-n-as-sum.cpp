//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to count the number of different ways in which n can be 
    //written as a sum of two or more positive integers.
    int countWays(int n)
    {
        // your code here
        // Not space optimized but works completely fine
        // USing coin change approach
        // ✅💯👀😏©👀
       int pack[n];
       for(int i=0;i<n;i++){
           pack[i]=i+1;
       }
       int dp[n+1][n+1];
       for(int i=0;i<=n;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=dp[i][j-1];
                if(pack[j-1]<=i){
                    dp[i][j]+=dp[i-pack[j-1]][j];
                }
            }
        }
        return dp[n][n]-1;
    }
};

//{ Driver Code Starts.
// Driver program
int main()
{
    //taking number of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.countWays(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends