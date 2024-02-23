//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
        // Similar problem to find the balance point in the array or the articulation point in the array.
        // ✅💯😏
        // TO easy now
        if(n==1)
        return "YES";
        long long int psum=0;
        for(int i=0;i<n;i++){
            psum+=arr[i];
        }
        long long int lsum=0,ck;
        for(int i=1;i<n;i++){
            lsum+=arr[i-1];
            ck=psum-(lsum+arr[i]);
            if(lsum==ck)
            return "YES";
        }
        return "NO";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends