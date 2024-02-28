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

		int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    // Tabulation solution for the problem.
        // ✅😏💯
	    int n=nums.size();
	    vector<vector<int>>dp(n,vector<int>(amount+1,0));
	    for(int i=0;i<=amount;i++){
	        if(i%nums[0]==0)
	        dp[0][i]=i/nums[0];
	        else
	        dp[0][i]=1e8;
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<=amount;j++){
	            int ntpick=0+dp[i-1][j];
	            int pick=1e8;
	            if(nums[i]<=j)
	            pick=1+dp[i][j-nums[i]];
	            dp[i][j]=min(pick,ntpick);
	        }
	    }
	    if(dp[n-1][amount]!=1e8)
	    return dp[n-1][amount];
	    else
	    return -1;
	}
	
		*/
			int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	    // space optimized solution for the problem.
        // ✅😏💯
	    int n=nums.size();
	    vector<int>dp(amount+1,0);
	    vector<int>cur(amount+1,0);
	    for(int i=0;i<=amount;i++){
	        if(i%nums[0]==0)
	        dp[i]=i/nums[0];
	        else
	        dp[i]=1e8;
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<=amount;j++){
	            int ntpick=0+dp[j];
	            int pick=1e8;
	            if(nums[i]<=j)
	            pick=1+cur[j-nums[i]];
	            cur[j]=min(pick,ntpick);
	        }
	        dp=cur;
	    }
	    if(dp[amount]<1e8)
	    return dp[amount];
	    else
	    return -1;
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