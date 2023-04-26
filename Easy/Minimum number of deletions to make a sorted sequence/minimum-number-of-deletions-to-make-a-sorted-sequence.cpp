//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    //DP variation of longest common subsequence
	    //✅💯😏🤝
	    int dp[n]={0};
	    dp[0]=1;
	    for(int i=1;i<n;i++){
	        dp[i]=1;
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i]){
	                dp[i]=max(dp[i],dp[j]+1);
	            }
	        }
	    }
	    int ans=dp[0];
	    for(int i=1;i<n;i++){
	        ans=max(ans,dp[i]);
	    }
	    return n-ans;
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends