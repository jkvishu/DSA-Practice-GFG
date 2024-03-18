//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    /*
    void find(int i,int n,int a[],vector<int>&temp,vector<vector<int>>&v){
        if(i==n){
            v.push_back(temp);
            return;
        }
        temp.push_back(a[i]);
        find(i+1,n,a,temp,v);
        temp.pop_back();
        find(i+1,n,a,temp,v);
    }
    bool check(vector<int>v){
        int n=v.size();
        for(int i=1;i<n;i++){
            if(v[i]<=v[i-1])
            return 0;
        }
        return 1;
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       // Very much brute force approach
       // TLE
       // Recursive solution
       // ✅😏💯 
       vector<vector<int>>v;
       vector<int>temp;
       find(0,n,a,temp,v);
       int ans=0;
       for(int i=0;i<v.size();i++){
           if(check(v[i])){
               int x=v[i].size();
           ans=max(ans,x);
           }
       }
       return ans;
    }

    int find(int i,int prv,int n,int a[]){
        if(i==n)
        {
          return 0;  
        }
        int len=0+find(i+1,prv,n,a);
        if(prv==-1||a[i]>a[prv])
        len=max(len,1+find(i+1,i,n,a));
        return len;
    }
    int longestSubsequence(int n, int a[])
    {
        // Striver Optimal Recursive code i.e space is optimized only
        // ✅😏💯
        // TLE
        return find(0,-1,n,a);
    }
        
        int find(int i,int prv,int n,int a[],vector<vector<int>>&dp){
        if(i==n)
        {
          return 0;  
        }
        if(prv!=-1){
            if(dp[i][prv]!=-1)
            return dp[i][prv];
        }
        int len=0+find(i+1,prv,n,a,dp);
        if(prv==-1||a[i]>a[prv])
        len=max(len,1+find(i+1,i,n,a,dp));
        if(prv!=-1)
        return dp[i][prv]=len;
    }
    int longestSubsequence(int n, int a[])
    {
        // Memoization solution for the problem.
        // ✅😏💯
        // Still TLE
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return find(0,-1,n,a,dp);
    }
    
    int longestSubsequence(int n, int a[])
    {
        // Tabulation solution for the problem.
        // ✅😏💯
        // Still TLE
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=-1;j--){
                 int len=0+dp[i+1][j+1];
                 if(j==-1||a[i]>a[j])
                 len=max(len,1+dp[i+1][i+1]);
                 dp[i][j+1]=len;
            }
        }
        return dp[0][0];
    }
    */
    int longestSubsequence(int n, int a[])
    {
        // Most Optimal Solution
        // ✅😏💯
        // Ek baar me baby girl
        vector<int>ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            auto it=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
            if(it<ans.size())
            ans[it]=a[i];
            else
            ans.push_back(a[i]);
        }
        return ans.size();
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends