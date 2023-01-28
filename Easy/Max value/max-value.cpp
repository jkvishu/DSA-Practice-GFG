//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxVal(int a[], int n) {
        //Find this question very easy u just need to think simple.🥱
        //Done in 2 min in first attempt
        int mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]-i);
            mn=min(mn,a[i]-i);
        }
        return (mx-mn);
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
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.maxVal(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends