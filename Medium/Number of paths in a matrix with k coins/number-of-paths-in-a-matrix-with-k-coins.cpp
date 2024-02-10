//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
/*
   void find(int i,int j,int n,int k,vector<vector<int>>&arr,long long int &ans){
    if(k<0)
    return;
    if(i>=0&&i<n&&j>=0&&j<n){
      if(i==n-1&&j==n-1&&k==arr[i][j])
      ans++;
      find(i+1,j,n,k-arr[i][j],arr,ans);
      find(i,j+1,n,k-arr[i][j],arr,ans);
    }
  }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        
        // Code Here
        // POTD
        // ✅🤝😏🙂💯
        long long int ans=0;
        find(0,0,n,k,arr,ans);
        return ans;
    }
    */
    long long solve(int n, int k, int i, int j, vector<vector<int>>& arr, vector<vector<vector<long long>>>& dp){
        if(i >= n || j >= n)
            return 0;
        k -= arr[i][j];
        if(i == n - 1 && j == n - 1){
            if(k == 0)
                return 1;
            return 0;
        }
        if(k < 0)
            return 0;
        if(dp[i][j][k] != -1)
            return dp[i][j][k];
        return dp[i][j][k] = solve(n, k, i + 1, j, arr, dp) + solve(n, k, i, j + 1, arr, dp);
    }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        
        // Code Here
        // POTD
        // ❌©
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(n, vector<long long>(k + 1, -1)));
        return solve(n, k, 0, 0, arr, dp);
    }
    
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n+1, vector<int>(n+1, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends