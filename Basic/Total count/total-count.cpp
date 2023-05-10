//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int totalCount(int arr[], int n, int k) {
        // code here
        // ✅😏💯
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            continue;
            if(arr[i]%k==0)
            ans+=(arr[i]/k);
            else
            ans+=(arr[i]/k)+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.totalCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends