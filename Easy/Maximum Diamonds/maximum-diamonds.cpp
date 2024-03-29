//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        // YE bhi koi question ha more easier than basic ones
        // POTD
        // ✅💯😏😎
        priority_queue<int>pq;
        long long int ans=0;
        for(int i=0;i<N;i++){
            pq.push(A[i]);
        }
        while(K){
            ans+=pq.top();
            int c=pq.top()/2;
            pq.pop();
            pq.push(c);
            K--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends