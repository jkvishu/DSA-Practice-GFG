//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
        int dp[501][501];
        int solve(string &a,string &b,int i,int j,int cnt){
        if(cnt==b.size())return 1;
        if(i==a.length()&&j==b.length())return 0;
        if(i==a.length())return 0;
        if(j==b.length())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(a[i]==b[j])return dp[i][j]=solve(a,b,i+1,j+1,cnt+1)+solve(a,b,i+1,j,cnt);
        else{
        return dp[i][j]=solve(a,b,i+1,j,cnt);
         }
         }
        int countWays(string a, string b){
            //DP 💯©
        memset(dp,-1,sizeof(dp));
        return solve(a,b,0,0,0);
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1;
        cin>>S2;
        
        Solution ob;
        cout<<ob.countWays(S1, S2)<<endl;
    }
    return 0;
}
// } Driver Code Ends