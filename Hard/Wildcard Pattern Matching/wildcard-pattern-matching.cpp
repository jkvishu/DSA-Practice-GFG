//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
/*
    int find(int n,int m,string s1,string s2){
        if(n<0&&m<0)
        return 1;
        if(n<0&&m>=0)
        return 0;
        if(m<0&&n>=0){
            for(int j=n;j>=0;j--){
                if(s1[j]!='*')
                return false;
            }
            return true;
        }
        if(s1[n]==s2[m]||s1[n]=='?'){
            return find(n-1,m-1,s1,s2);
        }
        if(s1[n]=='*'){
            return find(n-1,m,s1,s2)|find(n,m-1,s1,s2);
        }
        else return false;
    }
    int wildCard(string pat,string str)
    {
        // Brute force but this was the approach of striver not mine i was not able to figure out the recusrive relation to solve this problem.
        // ✅🤝🫠👀💯
        // TLE
        // Recursive approach
        int n=pat.length();
        int m=str.length();
        return find(n-1,m-1,pat,str);
    }

    int find(int n,int m,string s1,string s2,vector<vector<bool>>&dp){
        if(n<0&&m<0)
        return 1;
        if(n<0&&m>=0)
        return 0;
        if(m<0&&n>=0){
            for(int j=n;j>=0;j--){
                if(s1[j]!='*')
                return false;
            }
            return true;
        }
        if(dp[n][m]!=false)
        return dp[n][m];
        if(s1[n]==s2[m]||s1[n]=='?'){
            return dp[n][m]=find(n-1,m-1,s1,s2,dp);
        }
        else if(s1[n]=='*'){
            return dp[n][m]=find(n-1,m,s1,s2,dp)|find(n,m-1,s1,s2,dp);
        }
        else return dp[n][m]=false;
    }
    int wildCard(string pat,string str)
    {
        // Memoization solution for the problem.
        // ✅😏💯
        // Still TLE
        int n=pat.length();
        int m=str.length();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
        return find(n-1,m-1,pat,str,dp);
    }
    */
      int wildCard(string pat,string str){
          // Code here
          // Tabulation solution for the problem.
          // ✅😏💯
          int n=pat.length();
          int m=str.length();
          vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
          dp[0][0]=true;
          for(int i=1;i<=n;i++){
              bool f=true;
              for(int j=1;j<=i;j++){
                if(pat[j-1]!='*')
                {
                    f=false;
                    break;
                }
            }
            dp[i][0]=f;
          }
          for(int i=1;i<=n;i++){
              for(int j=1;j<=m;j++){
                  if(pat[i-1]==str[j-1]||pat[i-1]=='?')
                  dp[i][j]=dp[i-1][j-1];
                  else if(pat[i-1]=='*')
                  dp[i][j]=dp[i-1][j]|dp[i][j-1];
                  else 
                  dp[i][j]=false;
              }
          }
          return dp[n][m];
      }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends