//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int dp[501][501];
     int mod=1e9+7;
        int solve(string &a,string &b,int i,int j,int cnt){
        if(cnt==b.size())return 1;
        if(i==a.length()&&j==b.length())return 0;
        if(i==a.length())return 0;
        if(j==b.length())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(a[i]==b[j])return dp[i][j]=(solve(a,b,i+1,j+1,cnt+1)+solve(a,b,i+1,j,cnt))%mod;
        else{
        return dp[i][j]=solve(a,b,i+1,j,cnt);
         }
         }
        int countWays(string a, string b){
            //DP 💯©
            // POTD
        memset(dp,-1,sizeof(dp));
        return solve(a,b,0,0,0);
        }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends