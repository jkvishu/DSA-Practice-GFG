//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
         // DP solution 
        // 👀✅🤝©
        // LITTLe correction from the solution of GFG-C.
        int m=1e9+7;
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int j=1;j<=sum;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j<arr[i-1])
                dp[i][j]=dp[i-1][j]%m;
                else
                dp[i][j]=(dp[i-1][j]%m+dp[i-1][j-arr[i-1]]%m)%m;
            }
        }
       return dp[n][sum]%m;
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