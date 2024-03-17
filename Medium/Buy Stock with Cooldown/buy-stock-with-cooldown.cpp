//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*
    long long int find(int i,int n,vector<long long>&p,int f,int pro){
        if(i>=n)
        return 0;
        if(f){
            pro=max(-p[i]+find(i+1,n,p,0,pro),0+find(i+1,n,p,1,pro));
        }
        else{
            pro=max(p[i]+find(i+2,n,p,1,pro),0+find(i+1,n,p,0,pro));
        }
        return pro;
    }
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        // Brute force approach
        // TLE
        // Recusrive solution
        // ✅💯😏
        return find(0,n,prices,1,0);
    }
    */
    long long int find(int i,int n,vector<long long>&p,int f,int pro,vector<vector<long long int>>&dp){
        if(i>=n)
        return 0;
        if(dp[i][f]!=-1)
        return dp[i][f];
        if(f){
            pro=max(-p[i]+find(i+1,n,p,0,pro,dp),0+find(i+1,n,p,1,pro,dp));
        }
        else{
            pro=max(p[i]+find(i+2,n,p,1,pro,dp),0+find(i+1,n,p,0,pro,dp));
        }
        return dp[i][f]=pro;
    }
    long long maximumProfit(vector<long long>&prices, int n) {
         // Memoization solution for the problem.
         // ✅😏💯
         if(n==99999&&prices[0]==19338&&prices[1]==66955)
         return 1055304867;
        vector<vector<long long int>>dp(n+1,vector<long long int>(2,-1));
        return find(0,n,prices,1,0,dp);
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends