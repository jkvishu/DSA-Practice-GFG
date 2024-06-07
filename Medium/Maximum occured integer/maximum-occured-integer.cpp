//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int L[], int R[], int maxx) {

        // Your code here
        // POTD
        // ❌©
         vector<int>v(maxx+10);
        int i;
        for(i=0;i<n;i++){
            v[L[i]]++;
            v[R[i]+1]--;
        }
        int mx=v[0],res=0;
        for(i=1;i<maxx+10;i++){
            v[i]=v[i]+v[i-1];
            if(v[i]>mx){
                mx=v[i];
                res=i;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    // taking testcases
    cin >> t;

    while (t--) {
        int n;

        // taking size of array
        cin >> n;
        int l[n];
        int r[n];

        // adding elements to array L
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        int maxx = 0;

        // adding elements to array R
        for (int i = 0; i < n; i++) {

            cin >> r[i];
            if (r[i] > maxx) {
                maxx = r[i];
            }
        }
        Solution ob;

        // calling maxOccured() function
        cout << ob.maxOccured(n, l, r, maxx) << endl;
    }

    return 0;
}
// } Driver Code Ends