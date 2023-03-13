//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        // POTD ❌©👀
        long long p=0;
        long long mx=INT_MAX,ans=0;
        for(int i=0;i<N;i++){
        int diff=B[i]/2;
        if(diff>=1){
        ans=ans+ diff*2*A[i];
        p+=diff;
        mx=min(int(mx),A[i]);
        }
        }
        if(p%2 ==1){
        ans-=2*mx;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends