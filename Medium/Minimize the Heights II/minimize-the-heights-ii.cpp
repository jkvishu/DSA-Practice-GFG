//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        
        sort(arr,arr+n);
        int i,ans,mn,mx,sml,grt;
        ans=arr[n-1]-arr[0];
        mn=arr[0]+k;
        mx=arr[n-1]-k;
        for(i=1;i<n;i++)
        {
            sml=min(mn,arr[i]-k);
            grt=max(mx,arr[i-1]+k);
            if(sml<0)
            continue;
            ans=min(ans,grt-sml);
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
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends