//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  /*
    int find(int i, int n, int p[], int pro, int f, int c)
    {
    if (i == n || c == 0)
        return 0;
    if (f && c)
    {
        pro = max(-p[i] + find(i + 1, n, p, pro, 0, c), 0 + find(i + 1, n, p, pro, 1, c));
    }
    else
    {
        pro = max(p[i] + find(i + 1, n, p, pro, 1, c-1), 0 + find(i + 1, n, p, pro, 0, c));
    }
    return pro;
    }
    int maxProfit(int K, int N, int A[]) {
        // code here
        // Brute force approach
        // TLE
        // Recusrive solution
        // ✅💯😏
        return find(0, N, A, 0, 1, K);
    }
    */
    int find(int i, int n, int p[], int pro, int f, int c,vector< vector< vector<int> > > &dp)
    {
    if (i == n || c == 0)
    return 0;
    if(dp[i][f][c]!=-1)
    return dp[i][f][c];
    if (f && c)
    {
        pro = max(-p[i] + find(i + 1, n, p, pro, 0, c,dp), 0 + find(i + 1, n, p, pro, 1, c,dp));
    }
    else
    {
        pro = max(p[i] + find(i + 1, n, p, pro, 1, c-1,dp), 0 + find(i + 1, n, p, pro, 0, c,dp));
    }
    return dp[i][f][c]=pro;
    }
    int maxProfit(int K, int N, int A[]) {
      // Memoization solution for the problem.
      // ✅😏💯
        vector< vector< vector<int> > > dp(N, vector< vector<int> >(2, vector<int>(K+1, -1)));
        return find(0, N, A, 0, 1, K,dp);
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends