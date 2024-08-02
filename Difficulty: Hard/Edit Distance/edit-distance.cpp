//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  /*
    int find(int n,int m,string s,string t){
        if(n<0)
        return m+1;
        if(m<0)
        return n+1;
        if(s[n]==t[m])
        return 0+find(n-1,m-1,s,t);
        else{
            int s1=1+find(n-1,m,s,t);
            int s2=1+find(n,m-1,s,t);
            int s3=1+find(n-1,m-1,s,t);
            return min(s1,min(s2,s3));
        }
    }
    int editDistance(string s, string t) {
        // Code here
        // Brute force but this was the approach of striver not mine i was not able to figure out the recusrive relation to solve this problem.
        // ✅🤝🫠👀💯
        // TLE
        // Recursive approach
        int n=s.length();
        int m=t.length();
        return find(n-1,m-1,s,t);
    }

    int find(int n,int m,string s,string t,vector< vector<int> > &dp){
        if(n<0)
        return m+1;
        if(m<0)
        return n+1;
        if(dp[n][m]!=-1)
        return dp[n][m];
        if(s[n]==t[m])
        return 0+find(n-1,m-1,s,t,dp);
        else{
            int s1=1+find(n-1,m,s,t,dp);
            int s2=1+find(n,m-1,s,t,dp);
            int s3=1+find(n-1,m-1,s,t,dp);
            return dp[n][m]=min(s1,min(s2,s3));
        }
    }
    int editDistance(string s, string t) {
        // Code here
        // Memoization solution for the problem.
        // ✅😏💯
        int n=s.length();
        int m=t.length();
        vector< vector<int> > dp(n + 1, vector<int>(m + 1, -1));
        return find(n-1,m-1,s,t,dp);
    }
    
    int editDistance(string s, string t) {
        // Code here
        // Tabulation solution for the problem.
        // ✅😏💯
        int n=s.length();
        int m=t.length();
        vector< vector<int> > dp(n + 1, vector<int>(m + 1, 0));
        for(int i=0;i<=n;i++){
            dp[i][0]=i;
        }
         for(int i=0;i<=m;i++){
            dp[0][i]=i;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1])
                dp[i][j]=dp[i-1][j-1];
                else{
                int s1=1+dp[i-1][j];
                int s2=1+dp[i][j-1];
                int s3=1+dp[i-1][j-1];
                dp[i][j]=min(s1,min(s2,s3));
                }
            }
        }
        return dp[n][m];
    }
    */
    
    int editDistance(string s, string t) {
        // Code here
        // Space Optimized solution.
        // ✅😏💯
        int n=s.length();
        int m=t.length();
        vector<int> dp(m + 1,0);
        vector<int> cur(m + 1,0);
         for(int i=0;i<=m;i++){
            dp[i]=i;
        }
        for(int i=1;i<=n;i++){
            cur[0]=i;
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1])
                cur[j]=dp[j-1];
                else{
                int s1=dp[j];
                int s2=dp[j-1];
                int s3=cur[j-1];
                cur[j]=1+min(s1,min(s2,s3));
                }
            }
            dp=cur;
        }
        return dp[m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends