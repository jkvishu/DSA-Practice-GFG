//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        // Jood ✅💯😏
        int x=1;
        for(int i=0;i<n;i++){
            if(i%2==0)
            x=1;
            else
            x=0;
            for(int j=0;j<=i;j++){
                cout<<x<<" ";
                if(x==1)
                x=0;
                else
                x=1;
            }
            cout<<endl;
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends