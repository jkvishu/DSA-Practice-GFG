//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    // ✅😏💯🤝
	    // Striver baba
	    // Solved and Coded in 3 min 😎
	    long long int sum=0,psum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        psum+=arr[i];
	    }
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
	            dp[i][j]=pick|ntpick;
	        }
	    }
	    int ans=1e9;
	    for(int i=0;i<=sum/2;i++){
	        if(dp[n-1][i]){
	            int s1=psum-i;
	            ans=min(ans,abs(s1-i));
	        }
	    }
	    return ans;
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

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends