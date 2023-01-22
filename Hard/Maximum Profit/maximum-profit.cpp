//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int k, int n, int arr[]) {
        // code here
        //cpyppypcpyt
        vector<int> prev (n, 0);
        vector<int> curr (n, 0);
        for(int i = 1; i <= k; i++){
            for(int j = 1; j < n; j++){
                curr[j] = curr[j - 1];
                for(int m = 0; m < j; m++){
                    curr[j] = max(curr[j], prev[m] + arr[j] - arr[m]);
                }
            }
            for(int i = 0; i < n; i++){
                prev[i] = curr[i];
            }
        }
        return curr[n - 1];
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