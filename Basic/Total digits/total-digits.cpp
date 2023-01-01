//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int totalDigits(long long int n){
        // code here
        //ccppy ppspste
       long long int count =0;
       for(int i=1; i<=n; i=i*10){
           count+= n-i+1;
       }
       return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.totalDigits(n) << endl;
    }
    return 0;
}

// } Driver Code Ends