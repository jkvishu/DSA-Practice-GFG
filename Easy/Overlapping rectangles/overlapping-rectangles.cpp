//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        // 💯©❌👀
        int low_x1 = min(L1[0],R1[0]);
        int high_x1 = max(L1[0],R1[0]);
        
        int low_x2 = min(L2[0],R2[0]);
        int high_x2 = max(L2[0],R2[0]);
        
        //y axis
        int low_y1 = min(L1[1],R1[1]);
        int high_y1 = max(L1[1],R1[1]);
        
        int low_y2 = min(L2[1],R2[1]);
        int high_y2 = max(L2[1],R2[1]);
        
        if((high_x1 >= high_x2 and high_x2 >= low_x1) || (high_x1 <= high_x2 and high_x1 >= low_x2)){
            if((high_y1 >= high_y2 and high_y2 >= low_y1) || (high_y1 <= high_y2 and high_y1 >= low_y2)){
                return 1;
            }
            return 0;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}
// } Driver Code Ends