//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
        int maxCoins(int N, vector <int> &a)
        {
        // write your code here
        // ❌❌👀©
        // POTD
        vector<vector<int>> dp(N+2, vector<int>(N+2, 0));
        vector<int> b(N+2);
        b[0] = b[N+1] = 1;
        for(int i=1; i<=N; i++){
            b[i] = a[i-1];
        }
        for(int len=1; len<=N; len++){
            for(int i=1; i<=N-len+1; i++){
                int j = i+len-1;
                for(int k=i; k<=j; k++){
                    dp[i][j] = max(dp[i][j], dp[i][k-1] + dp[k+1][j] + b[i-1]*b[k]*b[j+1]);
                }
            }
        }
        return dp[1][N];
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends