//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        // POTD ❌👀©
        int sum = 0;
        for(int i=0; i<N; i++) {
            sum += arr[i];
        }
        
        if(sum%2) {
            return 0;
        }
        
        sum /= 2;
        
        int dp[2][sum+1];
        
        dp[0][0] = dp[1][0] = 1;
        
        for(int i=0; i<=N; i++) {
            for(int j=1; j<=sum; j++) {
                if(i==0) {
                    dp[i][j] = 0;
                }
                else {
                    dp[i%2][j] = dp[(i-1)%2][j];
                    if(arr[i-1]<=j) {
                        dp[i%2][j] |= dp[(i-1)%2][j-arr[i-1]];
                    }
                }
            }
        }
        
        return dp[N%2][sum];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends