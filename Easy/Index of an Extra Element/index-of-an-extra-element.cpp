//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findExtra(int n, int a[], int b[]) {
        // add code here.
        // POTD
        // ✅😏💯
        int l=0,h=n-1,m;
        while(l<h)
        {
            m=(l+h)/2;
            if(l==m&&l==h)
            {
                break;
            }
            if(a[m]==b[m])
            {
                l=m+1;
            }
            if(a[m]<b[m])
            {
                h=m;
            }
        }
        return l;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr1[n], arr2[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> arr2[i];
        }
        Solution obj;
        cout << obj.findExtra(n, arr1, arr2) << endl;
    }
}
// } Driver Code Ends