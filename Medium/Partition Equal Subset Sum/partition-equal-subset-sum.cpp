//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
/*
//1st approach using recursion solution.:->

    bool find(int n,int sum,int arr[]){
        if(sum==0){
            return 1;
        }
        if(n==0){
            if(arr[0]==sum)
            return 1;
            else
            return 0;
        }
        int pick=0;
        if(arr[n]<=sum)
        pick=find(n-1,sum-arr[n],arr);
        int ntpick=find(n-1,sum,arr);
        return pick||ntpick;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        // Brute force approach.
        // Recursive solution.
        // Hence TLE
        // ✅😏💯
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0)
        return 0;
        else{
            sum=sum/2;
            if(find(N-1,sum,arr))
            return 1;
            else
            return 0;
        }
    }
    */

//2nd approach using Memoization solution.:->    
    
    bool find(int n,int sum,int arr[],vector< vector<int> >&dp){
        if(sum==0){
            return 1;
        }
        if(n==0){
            if(arr[0]==sum)
            return 1;
            else
            return 0;
        }
        if(dp[n][sum]!=-1)
        return dp[n][sum];
        int pick=0;
        if(arr[n]<=sum)
        pick=find(n-1,sum-arr[n],arr,dp);
        int ntpick=find(n-1,sum,arr,dp);
        return dp[n][sum]=pick|ntpick;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        // Optimized approach.
        // Memoization solution
        // Still TLE
        // ✅😏💯
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0)
        return 0;
        else{
            sum=sum/2;
            vector< vector<int> >dp(N,vector<int>(sum+1,-1));
            if(find(N-1,sum,arr,dp))
            return 1;
            else
            return 0;
        }
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