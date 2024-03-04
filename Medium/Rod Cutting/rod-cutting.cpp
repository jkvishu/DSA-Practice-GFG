//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  /*
    int find(int price[],int n,int w){
        if(n==0){
            return price[0]*w;
        }
        int pick=INT_MIN;
        if((n+1)<=w)
        pick=price[n]+find(price,n,w-(n+1));
        int ntpick=0+find(price,n-1,w);
        return max(pick,ntpick);
    }
    int cutRod(int price[], int n) {
        //code here
        
        return find(price,n-1,n);
    }
    */
    int find(int price[],int n,int w,vector<vector<int>>&dp){
        if(n==0){
            return price[0]*w;
        }
        if(dp[n][w]!=-1)
        return dp[n][w];
        int pick=INT_MIN;
        if((n+1)<=w)
        pick=price[n]+find(price,n,w-(n+1),dp);
        int ntpick=0+find(price,n-1,w,dp);
        return dp[n][w]=max(pick,ntpick);
    }
    int cutRod(int price[], int n) {
        //code here
        // Memoization solution for the problem.
        // ✅😏💯
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return find(price,n-1,n,dp);
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends