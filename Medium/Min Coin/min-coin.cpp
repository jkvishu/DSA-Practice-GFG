//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	/*
	int find(vector<int>&nums, int sum,int n){
	    if(sum==0)
	    return 0;
	    if(sum<0||n<0)
	    return 1e8;
	    int pick=1+find(nums,sum-nums[n],n);
	    int ntpick=0+find(nums,sum,n-1);
	    return min(pick,ntpick);
	}
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    // brute force approach
        // Recursive solution for the problem.
        // ✅😏💯
        // TLE
	    int n=nums.size();
	    int ans=find(nums,amount,n-1);
	    if(ans>=1e8)
	    return -1;
	    else
	    return ans;
	}
	*/
	int find(vector<int>&nums, int sum,int n,vector< vector<int> >&dp){
	    if(sum==0)
	    return 0;
	    if(sum<0||n<0)
	    return 1e8;
	    if(dp[n][sum]!=-1)
	    return dp[n][sum];
	    int pick=1+find(nums,sum-nums[n],n,dp);
	    int ntpick=0+find(nums,sum,n-1,dp);
	    return dp[n][sum]=min(pick,ntpick);
	}
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    // Memoization solution for the problem.
        // ✅😏💯
	    int n=nums.size();
	    vector<vector<int>>dp(n,vector<int>(amount+1,-1));
	    int ans=find(nums,amount,n-1,dp);
	    if(ans>=1e8)
	    return -1;
	    else
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends