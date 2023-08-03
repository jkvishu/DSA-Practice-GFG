//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        // code here
        // ✅🤝👀
        vector<long long int>dp(n,1);
        long long int mo=1e9+7;
        for(int i=0;i<m-1;i++){
            for(int j=1;j<n;j++){
                dp[j]+=(dp[j-1])%mo;
            }
        }
        return dp[n-1]%mo;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends