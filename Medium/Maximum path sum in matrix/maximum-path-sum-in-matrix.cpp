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
*/
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