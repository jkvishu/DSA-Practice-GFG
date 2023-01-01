//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int gcd(long long D,long long E){
        if(E==0)
        return D;
        return gcd(E,D%E);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long int c;
        c=gcd(A,B);
        return {A*B/c,c};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends