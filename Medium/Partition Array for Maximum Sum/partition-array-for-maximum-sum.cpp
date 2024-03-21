//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*
    int find(int i,int n,int k,vector<int>& arr){
        if(i==n)
        return 0;
        int l=0;
        int mn=INT_MIN;
        int ans=INT_MIN;
        for(int j=i;j<min(i+k,n);j++){
            l++;
            mn=max(mn,arr[j]);
            int cal=l*mn+find(j+1,n,k,arr);
            ans=max(ans,cal);
        }
        return ans;
    }
    int solve(int n, int k, vector<int>& arr){
        // Code here
        // TLE
        // Recursive Solution
        // ✅😏💯
        return find(0,n,k,arr);
    }
    */
    int find(int i,int n,int k,vector<int>& arr,vector<vector<int>>&dp){
        if(i==n)
        return 0;
        int l=0;
        int mn=INT_MIN;
        int ans=INT_MIN;
        if(dp[i][i]!=-1)
        return dp[i][i];
        for(int j=i;j<min(i+k,n);j++){
            l++;
            mn=max(mn,arr[j]);
            int cal=l*mn+find(j+1,n,k,arr,dp);
            ans=max(ans,cal);
        }
        return dp[i][i]=ans;
    }
    int solve(int n, int k, vector<int>& arr){
        // Code here
        // Memoization solution for the problem.
        // ✅😏💯
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return find(0,n,k,arr,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends