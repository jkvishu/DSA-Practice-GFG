//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        // Solution clicked in just 10 sec.
        // Fastest
        // POTD 😏✅💯😎
        int ans=0;
        while(N){
            N=N&(N-1);
            ans++;
        }
        return ans;
    }
    /*
    // LookUp table method 
    // PArt of GFG-C.
    void lookup(){
      int i;
      table[0]=0;
      for(i=1;i<256;i++){
          table[i]=(i&1)+table[i/2];
      }
  }
    int setBits(int N) {
        lookup();
        // Write Your Code here
        //Done by taking concept from GFG course
        int res=table[N&0xff];
        N=N>>8;
        res=res+table[N&0xff];
        N=N>>8;
        res=res+table[N&0xff];
        N=N>>8;
        res=res+table[N&0xff];
        return res;
    }
    */
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends
