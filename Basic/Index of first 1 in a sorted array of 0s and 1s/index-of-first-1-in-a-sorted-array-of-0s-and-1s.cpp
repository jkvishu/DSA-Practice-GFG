//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        // BS basic ✅
        int l=0,h=n-1,j;
        while(l<=h){
            int m=(l+h)/2;
            if(a[m]==0){
                l=m+1;
            }
            else{
                j=m;
                while(j>=0&&a[j]==a[m]){
                    j--;
                }
                if(j<0)
                j=0;
                else
                j++;
                return j;
            }
        }
        return -1;
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
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends