//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        // POTD
          int n = arr.size() ;
          int m = arr[0].size() ;
          int maxi = 0 ;
          int k = -1 ;
        for(int i = 0 ; i < n ;i++){
              int ones =  0 ;
            for(int j = 0;j < m ;j++){
                if(arr[i][j] == 1){
                    ones++ ;
                }
            }
            if(ones > maxi){
                maxi = ones ;
                k = i ;
            }
        }
        return k ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends