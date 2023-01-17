//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxStairHeight(int N) {
        // Code here
        //Was very tricky to do IN O(1) time complexity
        int ans =sqrt(2*N);
        if ((ans*(ans+1))<=2*N)
            return ans;
        return (ans-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.maxStairHeight(N) << endl;
    }
    return 0;
}
// } Driver Code Ends