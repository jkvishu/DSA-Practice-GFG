//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int mod=1e9+7;
class Solution{
	public:
	/*
	int find(int arr[],int n,int sum){
	    if(n==0){
	        if(arr[0] == 0 && sum == 0) return 2;
            if(arr[0] == sum || sum == 0) return 1;
            return 0;
	    }
	    int ntpick=find(arr,n-1,sum);
	    int pick=0;
	    if(arr[n]<=sum)
	    pick=find(arr,n-1,sum-arr[n]);
	    return (ntpick+pick);
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        // brute force approach
        // Recursive solution for the problem.
        // ✅😏💯
        // TLE
       return find(arr,n-1,sum)%mod;
	}
// 	int mod=1e9+7;
int find(int arr[], int n, int sum,vector< vector<int> >&dp)
{

    if (n == 0)
    {
        if (arr[0] == 0 && sum == 0)
            return 2;
        if (arr[0] == sum || sum == 0)
            return 1;
        return 0;
    }
    if(dp[n][sum]!=-1)
    return dp[n][sum];
    int ntpick = find(arr, n - 1, sum,dp);
    int pick = 0;
    if (arr[n] <= sum)
        pick = find(arr, n - 1, sum - arr[n],dp);
    return dp[n][sum]=(ntpick + pick) % mod;
}
int perfectSum(int arr[], int n, int sum)
{
    // Your code goes here
    // Memoization solution for the problem.
    // ✅😏💯
    vector< vector<int> >dp(n,vector<int>(sum+1,-1));
    return find(arr, n - 1, sum,dp) % mod;
}
*/
int perfectSum(int arr[], int n, int sum)
{
    // Your code goes here
    // space optimized solution for the problem.
    // ✅😏💯
    // Need to handle 0's case by sorting the array in decreasing order.
    sort(arr,arr+n,greater<int>());
    vector<int>dp(sum+1,0);
    vector<int>cur(sum+1,0);
    dp[0]=1;
    cur[0]=1;
    if(arr[0]<=sum)
    dp[arr[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=sum;j++){
            int ntpick=dp[j];
            int pick=0;
            if(arr[i]<=j)
            pick=dp[j-arr[i]];
            cur[j]=(pick+ntpick)%mod;
        }
        dp=cur;
    }
    return dp[sum]%mod;
}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends