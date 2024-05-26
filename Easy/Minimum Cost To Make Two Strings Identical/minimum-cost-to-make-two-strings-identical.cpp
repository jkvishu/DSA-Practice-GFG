//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
  /*
    int find(string &x,string &y,int n,int m){
        if(n<0||m<0)
        return 0;
        if(n==0&&m==0)
        {
            if(x[0]==y[0])
            return 1;
            return 0;
        }
        int pick=0;
        int ntpick=0;
        if(x[n]==y[n])
        pick=1+find(x,y,n-1,m-1);
        else
        ntpick=max(0+find(x,y,n-1,m),0+find(x,y,n,m-1));
        return max(pick,ntpick);
    }
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
        // POTD
        // TLE
        // BRute force approach using recursion
        // ✅😏💯🤝
        int n=x.length();
        int m=y.length();
        int c=find(x,y,n-1,m-1);
        int ans=(n-c)*costX+(m-c)*costY;
        return ans;
    }
    */
       int solve(string &x,string &y,vector<vector<int>>&dp,int i,int j){
      
      if(i>=x.length() || j>=y.length())
      return 0;
      
      if(dp[i][j]!=-1)
      return dp[i][j];
      
      int ans=0;
      if(x[i]==y[j])
      ans=1+solve(x,y,dp,i+1,j+1);
      else{
          ans=max(solve(x,y,dp,i+1,j),solve(x,y,dp,i,j+1));
      }
      return dp[i][j]=ans;
  }
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
        // POTD
        // Memoization approach
        // ✅😏💯🤝
        int n=x.length();
        int m=y.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int res=solve(x,y,dp,0,0);
        int ans=(n-res)*costX+(m-res)*costY;
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int costX, costY;
        cin >> costX >> costY;

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends