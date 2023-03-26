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
        // ✅💯😏
        vector<bool>v(leaves+1,true);
        sort(frogs,frogs+N);
        if(frogs[0]==1)
        return 0;
        for(int i=0;i<N;i++){
            int x=frogs[i];
            if(x<=leaves&&v[x]){
            v[x]=0;
            for(int j=x;j<=leaves;j=j+x){
                v[j]=0;
            }
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