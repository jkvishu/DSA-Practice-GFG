//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int padovanSequence(int n) {
        // code here.
        // POTD
        // ✅💯😏
        if(n==1||n==2)
        return 1;
        if(n==3||n==4)
        return 2;
        int a=1,b=2,c=2,d=2;
        int i=4;
        int m=1e9+7;
        while(i<n){
            c=d;
            int t=c;
            d=(a+b)%m;
            a=b;
            b=t;
            i++;
        }
        return d;
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
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends