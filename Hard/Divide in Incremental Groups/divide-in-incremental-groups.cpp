//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int solve(int i, int N, int K, vector<vector<vector<int>>> &dp) {
        
        if(N == 0 && K == 0) {
            return 1;
        }
        if(K == 0 || N == 0) {
            return 0;
        }
        
        if(dp[i][N][K] != -1) {
            return dp[i][N][K];
        }
        
        int ans = 0;
        for(int j = i; j <= N; j++) {
            ans += solve(j, N-j, K-1, dp);
        }
        return dp[i][N][K] = ans;
    }

public:
    int countWaystoDivide(int N, int K) {
        //POTD 27/03/2023
        //❌©👀
        vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(N+1, vector<int>(K+1, -1)));
        return solve(1, N, K, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends