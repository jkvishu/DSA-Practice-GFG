//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int mod=1e9+7;
    /*
    int find(int n,vector<int>&A,int t){
        if(n<0){
            if(t==0)
            return 1;
            else
            return 0;
        }
        int pick=find(n-1,A,t-A[n]);
        int ntpick=find(n-1,A,t+A[n]);
        return (pick+ntpick)%mod;
    }
    int findTargetSumWays(int n, vector<int>&A ,int target) {
        //Your code here
        // brute force approach
        // Recursive solution for the problem.
        // ✅😏💯
        // TLE
        return find(n-1,A,target)%mod;
    }
    */
    int findTargetSumWays(int n, vector<int>&arr ,int sum) {
        // Your code here
        // Tabulation solution for the problem.
        // ✅😏💯
        int t=0;
        sum=abs(sum);
        for(int i=0;i<n;i++){
            arr[i]=abs(arr[i]);
        }
        for(int i=0;i<n;i++){
            t+=abs(arr[i]);
        }
        if(t-sum<0||(t-sum)%2!=0)
        return 0;
        sum=(t-sum)/2;
        vector<int>dp(sum+1,0);
        vector<int>cur(sum+1,0);
        if(arr[0]==0) 
        dp[0]=2;
        else 
        dp[0]=1;
        if(arr[0]!=0 && arr[0] <= sum) 
        dp[arr[0]]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=sum;j++){
                int pick=0;
                if(arr[i]<=j)
                pick=dp[j-arr[i]];
                int ntpick=dp[j];
                cur[j]=(pick+ntpick)%mod;
            }
            dp=cur;
        }
        return dp[sum];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(N, arr, target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends