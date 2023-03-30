//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
        // ✅💯😏
        int i=0,l=0,m=0,f1=0,f2=0,ans=INT_MAX;
        while(i<n){
            if(arr[i]==x){
                l=i;
                f1=1;
            }
            if(arr[i]==y){
                m=i;
                f2=1;
            }
            if(f1&&f2){
                ans=min(ans,abs(l-m));
            }
            i++;
        }
        if(ans==INT_MAX)
        return -1;
        return ans;
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
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends