//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        // POTD
        // ✅💯👀😏©👀
        int arr[3];
        arr[0]=1;
        arr[1]=2;
        arr[2]=3;
        long long int dp[n+1]={0};
        dp[0]=1;
        int mod=1e9+7;
        for(int i=1;i<=n;i++){
            for(int j=0;j<3;j++){
                if(i>=arr[j])
                dp[i]=(dp[i]+dp[i-arr[j]])%mod;
            }
        }
        return dp[n];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends