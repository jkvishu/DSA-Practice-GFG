//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        // ✅💯😏🤝
        // POTD 26/03/2023
        // Time taken 0.11sec
        // 90% my logic
        vector<bool>v(leaves+1,true);
        for(int i=0;i<N;i++){
            if(frogs[i]==1)
            return 0;
            int x=frogs[i];
            if(x<=leaves&&v[x]){
            for(int j=x;j<=leaves;j=j+x)
            v[j]=0;
            }
        }
        int ans=0;
        for(int i=1;i<v.size();i++){
            if(v[i])
            ans++;
        }
        return ans;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends
