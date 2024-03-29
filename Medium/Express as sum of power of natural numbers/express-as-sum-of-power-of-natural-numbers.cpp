//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int mod=1e9+7;
    int solve(int n,int x, int i,int max, vector<vector<long long>>&dp){
        if(n==0)return 1;
        if(i>max)return 0;
        if(n<0)return 0;
        if(dp[n][i]!=-1)return dp[n][i];
        long long int t=pow(i,x);
        
        int pick=solve(n-t,x,i+1,max,dp);
        int not_pick=solve(n,x,i+1,max,dp);
           return  dp[n][i]=(pick+not_pick)%mod;
    }
    
    int numOfWays(int n, int x)
    {
        // code here
        // PPOTD ❌👀©
        int maxLimit=pow(n,1.0/x);
        vector<vector<long long>> dp(n+1,vector<long long>(maxLimit+1,-1));
        return solve(n,x,1,maxLimit,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends