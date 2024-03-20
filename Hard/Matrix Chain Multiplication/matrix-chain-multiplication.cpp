//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
/*
    int find(int i,int j,int a[]){
        if(i==j)
        return 0;
        int ans=1e8;
        for(int k=i;k<j;k++){
            int steps=a[i-1]*a[k]*a[j]+find(i,k,a)+find(k+1,j,a);
            ans=min(ans,steps);
        }
        return ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        // TLE
        // Recursive solution
        // ✅😏💯🤝
        return find(1,N-1,arr);
    }
    */
    int find(int i,int j,int a[],vector<vector<long long int>>&dp){
        if(i==j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int ans=INT_MAX;
        for(int k=i;k<j;k++){
            int steps=a[i-1]*a[k]*a[j]+find(i,k,a,dp)+find(k+1,j,a,dp);
            ans=min(ans,steps);
        }
        return dp[i][j]=ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        // Memoization solution for the problem.
        // ✅😏💯🤝
        // Still TLE
        vector<vector<long long int>>dp(N,vector<long long int>(N,-1));
        return find(1,N-1,arr,dp);
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
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends