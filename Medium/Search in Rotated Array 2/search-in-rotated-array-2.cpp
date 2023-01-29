//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int k) {
        // Code here
        //Modified BS ✅💯
        int l=0,h=N-1;
        while(l<=h){
            int m=(l+h)/2;
            if(A[m]==k){
                return 1;
            }
            else if(A[m]>=A[l]&&A[l]!=A[h]){
                if(k<=A[m]&&k>=A[l]){
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                if(k>=A[m]&&k<=A[h]){
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends