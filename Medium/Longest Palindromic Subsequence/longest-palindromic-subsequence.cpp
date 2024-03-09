//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  /*
    int find(string s1,string s2,int n,int m){
        if(n<0||m<0)
        return 0;
        int pick=0;
        int ntpick=0;
        if(s1[n]==s2[m]){
            pick=1+find(s1,s2,n-1,m-1);
        }
        else{
            int t1=find(s1,s2,n-1,m);
            int t2=find(s1,s2,n,m-1);
            ntpick=max(t1,t2);
        }
        return max(pick,ntpick);
    }
    int longestPalinSubseq(string A) {
        //code here
        //  Brute force approach
        //  Mine own recursive solution for the problem.
        //  ✅😏💯
        //  TLE
        string b=A;
        reverse(b.begin(),b.end());
        int n=A.length();
        return find(A,b,n-1,n-1);
    }
    */
    int find(string s1,string s2,int n,int m,vector<vector<int>>&dp){
        if(n<0||m<0)
        return 0;
        int pick=0;
        int ntpick=0;
        if(dp[n][m]!=-1)
        return dp[n][m];
        if(s1[n]==s2[m]){
            pick=1+find(s1,s2,n-1,m-1,dp);
        }
        else{
            int t1=find(s1,s2,n-1,m,dp);
            int t2=find(s1,s2,n,m-1,dp);
            ntpick=max(t1,t2);
        }
        return dp[n][m]=max(pick,ntpick);
    }
    int longestPalinSubseq(string A) {
        //code here
        // Memoization solution for the problem.
        // ✅😏💯
        string b=A;
        reverse(b.begin(),b.end());
        int n=A.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return find(A,b,n-1,n-1,dp);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends