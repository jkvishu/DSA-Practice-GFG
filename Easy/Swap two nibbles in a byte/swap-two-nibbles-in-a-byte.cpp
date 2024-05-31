//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        // POTD
        // ✅😏💯
        if(n==0)
        return 0;
        int x=4;
        int a=16;
        int ans=0;
        while(x){
            if(n&1)
            ans+=a;
            a=a*2;
            x--;
            n=n>>1;
        }
        x=4;
        a=1;
        while(x){
            if(n&1)
            ans+=a;
            a=a*2;
            x--;
            n=n>>1;
        }
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
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends