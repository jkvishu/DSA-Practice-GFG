//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numOfSubsets(int arr[], int n, int k) {
        // code here
        // ©❌👀
        vector<vector<int>> dp(n, vector<int> (k + 1, -1));
        function<int(int, int)> lambda = [&](int i, int x) {
            if(i < 0 and x <= k) return 1;
            if(x > k) return 0;
            if(dp[i][x] != -1) return dp[i][x];
            int result = 0;
            result += lambda(i - 1, x);
            result += lambda(i - 1, x * arr[i]);
            return dp[i][x] = result;
        };
        return lambda(n - 1, 1) - 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends