//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	/*
	void find(int i,int &ans,int sum,int *arr,int n){
	    if(i>=n-1){
	    ans=max(ans,sum);
	    return;
	    }
	    for(int j=i+2;j<n;j++){
	        sum+=arr[j];
	        find(j,ans,sum,arr,n);
	        sum-=arr[j];
	    }
	}
	int findMaxSum(int *arr, int n) 
	{
	    //😏✅💯
	    //Brute force approach using recursion
	    if(n==1)
	    return arr[0];
	    int ans=INT_MIN;
	    int ans1=INT_MIN;
	    int sum=arr[0];
	    int sum1=arr[1];
	    find(0,ans,sum,arr,n);
	    find(1,ans1,sum1,arr,n);
	    return max(ans,ans1);
	}*/
	int find(int arr[],int n,int dp[]){
	    if(n==0)
	    return arr[n];
	    if(n<0)
	    return 0;
	    if(dp[n]!=-1)
	    return dp[n];
	    int pick=find(arr,n-2,dp)+arr[n];
	    int ntpick=find(arr,n-1,dp)+0;
	    return dp[n]=max(pick,ntpick);
	}
	int findMaxSum(int *arr, int n) 
	{
	    // Memoization method all learned from striver baba
	    // ✅💯😏🤝
	    int dp[n];
	    for(int i=0;i<n;i++){
	        dp[i]=-1;
	    }
	    return find(arr,n-1,dp);
	}
	/*
	int findMaxSum(int *arr, int n) 
	{
	    // code here
	    // POTD
	    // Space optimized approach.
	    // ✅🤝💯👀
	    if(n==1)
	    return arr[0];
	    if(n==2)
	    return max(arr[0],arr[1]);
	    int pp=arr[0];
	    int prev=max(arr[0],arr[1]);
	    int ans=prev;
	    for(int i=3;i<=n;i++){
	        ans=max(prev,pp+arr[i-1]);
	        pp=prev;
	        prev=ans;
	    }
	    return ans;
	}*/
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends