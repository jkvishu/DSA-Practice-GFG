//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int fun(int k){
      for(int i=2;i<k;i++){
          if(k%i==0){
              k=i;
              break;
          }
      }
      return k;
  }
    vector<int> leastPrimeFactor(int n) {
        //Code here
        //POTD ✅©©👀
        vector<int> v={0,1};
        for(int i=2;i<=n;i++){
            v.push_back(fun(i));
        }
        return v;
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
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends