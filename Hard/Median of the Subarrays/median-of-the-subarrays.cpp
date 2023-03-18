//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long find(int n, vector<int>& A, int m) 
    {
    long long current = n, total = 0, answer = 0;
    vector<int> v(2*n+1, 0);
    v[current]++;
    for (int i = 0; i < n; i++) 
    {
        int x = -1;
        if (A[i] >= m) {
            x = 1;
        }
        if (x == -1) {
            total -= v[current+x];
        } else {
            total += v[current];
        }
        current += x;
        answer += total;
        v[current]++;
    }
    return answer;
}
long long countSubarray(int N, vector<int> A, int M) 
{
    //❌©👀
    //POTD
    return find(N, A, M) - find(N, A, M+1);
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends