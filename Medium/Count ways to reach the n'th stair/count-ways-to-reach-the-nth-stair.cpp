//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
      //space optimized.
        // ✅💯👀😏©👀
    int arr[2];
    arr[0]=1;
    arr[1]=2;
    int dp[n+1]={0};
    dp[0]=1;
    int mod=1e9+7;
    for(int i=1;i<=n;i++){
        for(int j=0;j<2;j++){
            if(i>=arr[j])
            dp[i]=(dp[i]+dp[i-arr[j]])%mod;
        }
    }
    return dp[n];
    } 
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends