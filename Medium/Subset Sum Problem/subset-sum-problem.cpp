//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
/*
//1st approach 1st type of recusrive solution i.e mine
    void find(int i,int n,int cal,int &f,vector<int>&arr,int sum){
        if(i>=n)
    return;
    if(cal==sum){
        f=1;
        return;
    }
    for (int j = i; j < n; j++)
    {
        if ((cal + arr[j]) <= sum)
        {
            cal += arr[j];
            find(j + 1, n, cal, f, arr, sum);
            cal -= arr[j];
        }
    }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        // Brute force approach
        // Mine own recursive solution for the problem.
        // ✅😏💯
        // TLE
        if(arr[arr.size()-1]==sum)
        return 1;
        int f=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
        find(i+1,n,arr[i],f,arr,sum);
        if(f==1)
        return 1;
        f=0;
        }
        return 0;
    }
    
//1st appproach 2nd type of recursive solution

    bool find(int i,int n,int cal,int sum,vector<int>&arr){
        if(i==n){
            if(cal==sum)
            return true;
            else 
            return false;
        }
        if(cal==sum){
            return true;
        }
        cal+=arr[i];
        if(find(i+1,n,cal,sum,arr))
        return true;
        cal-=arr[i];
        if(find(i+1,n,cal,sum,arr))
        return true;
        return false;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // Brute force approach
        // Mine own recursive solution for the problem.
        // ✅😏💯
        // TLE
        int n=arr.size();
        if(find(0,n,0,sum,arr))
        return true;
        else
        return false;
    }
    
    
//2nd appproach memoization solution

    bool find(int i,int sum,vector<int> &arr,vector< vector<int> >&dp){
    if(sum==0){
        return 1;
    }
    if(i==0){
        if(sum==arr[0])
        return 1;
        else
        return 0;
    }
    if(dp[i][sum]!=-1)
    return dp[i][sum];
    int ntpick=find(i-1,sum,arr,dp);
    int pick=0;
    if(arr[i]<=sum)
    pick=find(i-1,sum-arr[i],arr,dp);
    return dp[i][sum]=ntpick||pick;
}
bool isSubsetSum(vector<int> arr, int sum)
{
    // code here
    // Memoization solution
    // Striver baba
    // ✅😏💯🤝
    int n=arr.size();
    vector< vector<int> >dp(n,vector<int>(sum+1,-1));
    if(find(n-1,sum,arr,dp))
    return 1;
    else
    return 0;
}

//3rd appproach Tabulation solution

static bool isSubsetSum(vector<int> arr, int sum)
{
    // code here
    // Tabulation solution
    // Striver baba
    // ✅😏💯🤝
    int n=arr.size();
    vector< vector<int> >dp(n,vector<int>(sum+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    if(arr[0]<=sum)
    dp[0][arr[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=sum;j++){
            int pick=0;
            if(arr[i]<=j)
            pick=dp[i-1][j-arr[i]];
            int ntpick=dp[i-1][j];
            dp[i][j]=pick | ntpick;
        }
    }
    return dp[n-1][sum];
}
*/

//4th appproach Space Optimized solution.

int isSubsetSum(vector<int> arr, int sum)
{
    // code here
    // Space Optimized solution.
    // Striver baba
    // ✅😏💯🤝
    int n=arr.size();
    vector<int>dp(sum+1,0);
    vector<int>prev(sum+1,0);
    dp[0]=1;
    prev[0]=1;
    if(arr[0]<=sum)
    dp[arr[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=sum;j++){
            int ntpick=dp[j];
            int pick=0;
            if(arr[i]<=j)
            pick=dp[j-arr[i]];
            prev[j]=pick|ntpick;
        }
        dp=prev;
    }
    return dp[sum];
}
/*
bool isSubsetSum(vector<int> &arr, int k)
{
    int n=arr.size();
vector<vector<bool>> dp(n+1, vector<bool>(k+1, false));
    for (int i = 0; i <= n; i++) dp[i][0] = true;

    for (int i = n-1; i >= 0; i--){
        for (int j = 1; j <= k; j++){
            bool skip = dp[i+1][j];
            bool take = false;
            if (j >= arr[i]) take = dp[i+1][j-arr[i]];
            dp[i][j] = skip || take;
        }
    }
    return dp[0][k];
}
*/

};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends