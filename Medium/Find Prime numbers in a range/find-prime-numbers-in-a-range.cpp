//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        // ✅💯 Easy tha ye to 😂
        if(M==N)
        return {M};
        vector<int>v;
        vector<int>prime(N+1,1);
        prime[1]=0;
        int i=2;
        while(i*i<=N){
            if(prime[i]){
                for(int j=i*i;j<=N;j=j+i){
                    prime[j]=0;
                }
            }
            i++;
        }
        for(i=M;i<=N;i++){
            if(prime[i]){
                v.push_back(i);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends