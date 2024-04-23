//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
        // POTD
        // ✅😏💯
        int a=1;
        int b=1;
        int mod=1000000007;
        if(n==0 || n==1) return 1;
        if(n==2)return 2;
        for(int i=2;i<n;i++){
        int temp=a;
        a=(a+b)%mod;
        b=temp;
        }
        return a;
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
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends