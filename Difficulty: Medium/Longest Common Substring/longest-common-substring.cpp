//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  /*
   int find(string s1,string s2,int n,int m,int ans){
        if(n<0||m<0)
        return ans;
        if(s1[n]==s2[m]){
            return find(s1,s2,n-1,m-1,ans+1);
        }
        return max(ans,max(find(s1,s2,n-1,m,0),find(s1,s2,n,m-1,0)));
    }
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        //  Brute force approach
        //  Mine own recursive solution for the problem.
        //  ✅😏💯
        //  TLE
        return find(s1,s2,n-1,m-1,0);
    }
    
     int find(string s1,string s2,int n,int m,int &ans,vector<vector<int>>&dp){
        if(n<0||m<0)
        return 0;
        if(dp[n][m]!=-1)
        return dp[n][m];
        int take=0;
        int t1=0;
        int t2=0;
        if(s1[n]==s2[m]){
            take=1+find(s1,s2,n-1,m-1,ans,dp);
        }
        t1=find(s1,s2,n-1,m,ans,dp);
        t2=find(s1,s2,n,m-1,ans,dp);
        ans=max(ans,take);
        return dp[n][m]=take;
    }
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        // Memoization solution for the problem.
        // ✅😏💯
        // Still TLE
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=INT_MIN;
        find(s1,s2,n-1,m-1,ans,dp);
        return ans;
    }
      int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        // Tabulation solution for the problem.
        // ✅😏💯
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                ans=max(ans,1+dp[i-1][j-1]);
                dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        return ans;
    }
    */
     int longestCommonSubstr (string s1, string s2)
    {
        // your code here
        // Space Optimized solution.
        int n=s1.length();
        int m=s2.length();
        // ✅😏💯
        vector<int>dp(m+1,0);
        vector<int>cur(m+1,0);
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                cur[j]=1+dp[j-1];
                ans=max(ans,cur[j]);
                }
                else{
                    cur[j]=0;
                }
            }
            dp=cur;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends