//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    /*
    long long int find(int i,int n,int a[],int toss){
        if(i>n)
        return 0;
        if(toss){
            return max(a[i]+find(i+1,n,a,0),a[n]+find(i,n-1,a,0));
        }
        else{
            return min(find(i+1,n,a,1),find(i,n-1,a,1));
        }
        
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        // Recursive Approach
        // ✅💯🤝😏
        // TLE
        return find(0,n-1,arr,1);
    }
    */
      long long int find(int i,int n,int a[],int toss,vector<vector<int>>&dp){
        if(i>n)
        return 0;
        if(dp[i][n]!=-1)
        return dp[i][n];
        if(toss){
            return dp[i][n]=max(a[i]+find(i+1,n,a,0,dp),a[n]+find(i,n-1,a,0,dp));
        }
        else{
            return dp[i][n]=min(find(i+1,n,a,1,dp),find(i,n-1,a,1,dp));
        }
        
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        // Memoization Approach
        // ✅💯🤝😏
        // POTD
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return find(0,n-1,arr,1,dp);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends