//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
/*
    int find(int n,int w,int val[],int wt[]){
        if(n==0){
            if(wt[0]<=w)
            return (w/wt[0])*val[0];
            else 
            return 0;
        }
        int pick=INT_MIN;
        if(wt[n]<=w)
        pick=val[n]+find(n,w-wt[n],val,wt);
        int ntpick=0+find(n-1,w,val,wt);
        return max(pick,ntpick);
        
    }
    int knapSack(int n, int W, int val[], int wt[])
    {
        //Code here
        // brute force approach
        // Recursive solution for the problem.
        // ✅😏💯
        // TLE
        return find(n-1,W,val,wt);
    }
    */
    int find(int n,int w,int val[],int wt[],vector<vector<int>>&dp){
        if(n==0){
            if(wt[0]<=w)
            return (w/wt[0])*val[0];
            else 
            return 0;
        }
        if(dp[n][w]!=-1)
        return dp[n][w];
        int pick=INT_MIN;
        if(wt[n]<=w)
        pick=val[n]+find(n,w-wt[n],val,wt,dp);
        int ntpick=0+find(n-1,w,val,wt,dp);
        return dp[n][w]=max(pick,ntpick);
        
    }
    int knapSack(int n, int W, int val[], int wt[])
    {
        // Code here
        // Memoization solution for the problem.
        // ✅😏💯
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
        return find(n-1,W,val,wt,dp);
    }
    
    /*{
        // code here
        vector<int>dp(W+1,0);
        for(int i=wt[0];i<=W;i++){
            dp[i]=val[0];
        }
        for(int i=1;i<n;i++){
            for(int j=W;j>=0;j--){
                int pick=INT_MIN;
                if(wt[i]<=j)
                pick=val[i]+dp[j-wt[i]];
                int ntpick=0+dp[j];
                dp[j]=max(pick,ntpick);
            }
        }
        return dp[W];
    }*/
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends