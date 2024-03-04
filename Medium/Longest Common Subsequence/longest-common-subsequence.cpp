//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
        /*
    int find(int n,int m, string s1, string s2){
        if(n<0||m<0)
        return 0;
        if(n==0&&m==0){
            return s1[0]==s2[0];
        }
        int pick=0;
        int ntpick=0;
        if(s1[n]==s2[m])
        pick=1+find(n-1,m-1,s1,s2);
        else
        {
            ntpick=max(0+find(n-1,m,s1,s2),0+find(n,m-1,s1,s2));
        }
        return dp[n][m]=max(pick,ntpick);
    }
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        //  Brute force approach
        //  Mine own recursive solution for the problem.
        //  ✅😏💯
        return find(n-1,m-1,s1,s2);
    }
    
    int find(int n,int m, string s1, string s2,vector<vector<int>>&dp){
        if(n<0||m<0)
        return 0;
        if(n==0&&m==0){
            return s1[0]==s2[0];
        }
        if(dp[n][m]!=-1)
        return dp[n][m];
        int pick=0;
        int ntpick=0;
        if(s1[n]==s2[m])
        pick=1+find(n-1,m-1,s1,s2,dp);
        else
        {
            ntpick=max(0+find(n-1,m,s1,s2,dp),0+find(n,m-1,s1,s2,dp));
        }
        return dp[n][m]=max(pick,ntpick);
    }
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        // Memoization solution for the problem.
        // ✅😏💯
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return find(n-1,m-1,s1,s2,dp);
    }
    */
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        // Memoization solution for the problem.
        // ✅😏💯
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends