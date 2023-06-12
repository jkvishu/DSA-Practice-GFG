//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        //POTD ❌©👀
        int arr[n];
        arr[0]=0;
        int i,ans,j;
        for(i=1;i<=n;i++)
        {
            ans=INT_MIN;
            for(j=0;j<i;j++)
            {
                ans=max(ans,price[j]+arr[i-j-1]);
            }
            arr[i]=ans;
        }
        return arr[n];
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
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends