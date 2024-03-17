//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  /*
    int find(int i,int n,vector<int> &prices,bool f,int pro){
        if(i==n)
        return 0;
        if(f){
            pro=max(-prices[i]+find(i+1,n,prices,0,pro),0+find(i+1,n,prices,1,pro));
        }
        else{
            pro=max(prices[i]+find(i+1,n,prices,1,pro),0+find(i+1,n,prices,0,pro));
        }
        return pro;
    }
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        // Brute force approach
        // TLE
        // Recusrive solution
        // ✅🤝🙂💯
        return find(0,n,prices,1,0);
    }
    
     int find(int i,int n,vector<int> &prices,int f,int pro,vector<vector<long long int>>&dp){
        if(i==n)
        return 0;
        if(dp[i][f]!=-1)
        return dp[i][f];
        if(f){
            pro=max(-prices[i]+find(i+1,n,prices,0,pro,dp),0+find(i+1,n,prices,1,pro,dp));
        }
        else{
            pro=max(prices[i]+find(i+1,n,prices,1,pro,dp),0+find(i+1,n,prices,0,pro,dp));
        }
        return dp[i][f]=pro;
    }
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        // Memoization solution for the problem.
        // ✅😏💯
        vector<vector<long long int>>dp(n,vector<long long int>(2,-1));
        return find(0,n,prices,1,0,dp);
    }
    */
     int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        // Tabulation solution for the problem.
        // ✅😏💯
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        for(int i=n-1;i>=0;i--){
            for(int f=0;f<=1;f++){
              int pro=0;
              if(f){
              pro=max(-prices[i]+dp[i+1][0],0+dp[i+1][1]);
              }
              else{
              pro=max(prices[i]+dp[i+1][1],0+dp[i+1][0]);
              }
              dp[i][f]=pro;
            }
        }
        return dp[0][1];
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends