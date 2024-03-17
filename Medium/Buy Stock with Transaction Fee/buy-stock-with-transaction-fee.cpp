//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*
    long long int find(int i, int n, vector<long long int> &prices, bool f, int pro,int fee)
    {
    if (i == n)
        return 0;
    if (f)
    {
        pro = max(-prices[i] + find(i + 1, n, prices, 0, pro,fee)-fee, 0 + find(i + 1, n, prices, 1, pro,fee));
    }
    else
    {
        pro = max(prices[i] + find(i + 1, n, prices, 1, pro,fee), 0 + find(i + 1, n, prices, 0, pro,fee));
    }
    return pro;
    }
    long long maximumProfit(vector<long long>&prices, int n, int fee) {
        // Code here
        // Brute force approach
        // TLE
        // Recusrive solution
        // ✅💯😏
        return find(0, n, prices, 1, 0,fee);
    }
    */
      long long int find(int i, int n, vector<long long int> &prices, bool f, int pro,int fee,vector<vector<long long int>> &dp)
    {
    if (i == n)
        return 0;
    if(dp[i][f]!=-1)
    return dp[i][f];
    if (f)
    {
        pro = max(-prices[i] + find(i + 1, n, prices, 0, pro,fee,dp)-fee, 0 + find(i + 1, n, prices, 1, pro,fee,dp));
    }
    else
    {
        pro = max(prices[i] + find(i + 1, n, prices, 1, pro,fee,dp), 0 + find(i + 1, n, prices, 0, pro,fee,dp));
    }
    return dp[i][f]=pro;
    }
    long long maximumProfit(vector<long long>&prices, int n, int fee) {
        // Code here
        // Brute force approach
        // TLE
        // Recusrive solution
        // ✅💯😏
        vector<vector<long long int>> dp(n + 1, vector<long long int>(2, -1));
        return find(0, n, prices, 1, 0,fee,dp);
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
        
        int fee; cin>>fee;
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n, fee)<<"\n";
    }
    return 0;
}
// } Driver Code Ends