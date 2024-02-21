//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
/*
//Approach number 1:-> Recursive solution

 void find(int &ans,int i,int m,int n,vector<vector<int>> &mat,int cal){
         if(i>=n)
        {
            ans=max(ans,cal);
            return;
        }
        for(int j=m;j<n;j++){
            for(int k=0;k<3;k++){
                if(k==0){
                    if(j-1>=0){
                        cal+=mat[i][j-1];
                        find(ans,i+1,j-1,n,mat,cal);
                        cal-=mat[i][j-1];
                    }
                }
                else if(k==1){
                    cal+=mat[i][j];
                    find(ans,i+1,j,n,mat,cal);
                    cal-=mat[i][j];
                }
                else{
                    if(j+1<n){
                        cal+=mat[i][j+1];
                        find(ans,i+1,j+1,n,mat,cal);
                        cal-=mat[i][j+1];
                    }
                }
            }
        }
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        // Brute force approach
        // Mine Own recursive solution.
        // ✅💯😏
        int ans=Matrix[0][0];
        find(ans,0,0,N,Matrix,0);
        return ans;
    }

//Approach number 2:-> Memoization solution

    int find(int i,int j,int n,vector<vector<int>> &mat,vector<vector<int>>&dp){
        if(j<0||j>=n)
        return -1e8;
         if(i==0)
        {
            return mat[i][j];
        }
        if(dp[i][j]!=-1)
        return dp[i][j];
        int left=mat[i][j]+find(i-1,j-1,n,mat,dp);
        int mid=mat[i][j]+find(i-1,j,n,mat,dp);
        int right=mat[i][j]+find(i-1,j+1,n,mat,dp);
        return dp[i][j]=max(left,max(mid,right));
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        // Optimized approach
        // Mine Own memoization solution.
        // ✅💯😏
        vector<vector<int>>dp(N,vector<int>(N,-1));
        int ans=-1e8;
        for(int i=0;i<N;i++){
        ans=max(ans,find(N-1,i,N,Matrix,dp));
        }
        return ans;
    }

//Approach number 3:-> Tabulation solution.

    int maximumPath(int n, vector<vector<int>> Matrix)
    {
        // code here
        // More Optimized approach
        // Tabulation solution.
        // ✅💯🤝🙂
        vector< vector<int> > dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        dp[0][i] = Matrix[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int left = Matrix[i][j];
            if (j > 0)
            left += dp[i - 1][j - 1];
            else
            left+=-1e8;
            int mid = Matrix[i][j] + dp[i - 1][j];
            int right = Matrix[i][j];
            if (j + 1 < n)
            right += dp[i - 1][j + 1];
            else
            right+=-1e8;
            dp[i][j] = max(left, max(mid, right));
        }
    }
    int ans=-1e8;
    for(int i=0;i<n;i++){
        ans=max(ans,dp[n-1][i]);
    }
    return ans;
    }
     */
     
     //Approach number 4:-> space optimization✅
     
       int maximumPath(int n, vector<vector<int>> Matrix)
    {
        // Best approach
        // Space Optimized solution.
        // ✅💯🤝🙂
        vector<int>dp(n,0);
    for (int i = 0; i < n; i++)
    {
        dp[i] = Matrix[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        vector<int>temp(n,0);
        for (int j = 0; j < n; j++)
        {
            int left = Matrix[i][j];
            if (j > 0)
            left += dp[j - 1];
            else
            left+=-1e8;
            int mid = Matrix[i][j] + dp[j];
            int right = Matrix[i][j];
            if (j + 1 < n)
            right += dp[j + 1];
            else
            right+=-1e8;
            temp[j] = max(left, max(mid, right));
        }
        dp=temp;
    }
    int ans=-1e8;
    for(int i=0;i<n;i++){
        ans=max(ans,dp[i]);
    }
    return ans;
    }
     
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
