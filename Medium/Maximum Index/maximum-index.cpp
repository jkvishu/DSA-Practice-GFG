//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        // POTD ✅🤝©👀
        // Already solved in earlier time
        int a[n];
        int b[n];
        int mx,i,j=0,ans=0;
        mx=arr[0];
        a[0]=mx;
        for(i=1;i<n;i++)
        {
            if(arr[i]<mx)
            {
                mx=arr[i];
                a[i]=mx;
            }
            else
            {
                a[i]=mx;
            }
        }
        mx=arr[n-1];
        b[n-1]=mx;
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]>mx)
            {
                mx=arr[i];
                b[i]=mx;
            }
            else
            {
                b[i]=mx;
            }
        }
        i=0;
        while(i<n&&j<n)
        {
            if(a[i]<=b[j])
            {
            while(j<n&&a[i]<=b[j])
            {
                j++;
            }
            ans=max(ans,j-i-1);
            }
            i++;
        }
        return ans;
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
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends