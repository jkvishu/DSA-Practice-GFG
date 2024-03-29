//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution
{
  public:
    // function to count the total  
    // number of ways to sum up to 'N' 
    int countWays(int arr[], int m, int N) 
    { 
      //code here.
       //space optimized.
        // ✅💯👀😏©👀
    int dp[N+1]={0};
    dp[0]=1;
    int mod=1e9+7;
    for(int i=1;i<=N;i++){
        for(int j=0;j<m;j++){
            if(i>=arr[j])
            dp[i]=(dp[i]+dp[i-arr[j]])%mod;
        }
    }
    return dp[N];
    } 
    
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int m,n ;
	        cin>>m>>n;
	        int arr[m];
	        for(int i = 0;i<m;i++)
	            cin>>arr[i];
	        Solution ob;     
	        cout<<ob.countWays(arr,m,n)<<endl;
	    }
}
// } Driver Code Ends