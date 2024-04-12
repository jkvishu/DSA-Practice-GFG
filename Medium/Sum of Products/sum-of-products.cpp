//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        // POTD
        // ✅🤝😏💯
        vector<int>bt(32,0);
        long long int ans=0;
        for(int i=0;i<n;i++){
            long long int res=1;
            for(int j=0;j<32;j++){
                if((arr[i]>>j)&1){
                    if(bt[j]!=0)
                    ans+=(res*bt[j]);
                    bt[j]=bt[j]+1;
                }
                res=res*2;
            }
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
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends