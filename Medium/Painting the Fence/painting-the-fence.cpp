//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends

#define mc 1000000007
class Solution{
    public:
    int add(int a,int b)
    {
        return (a%mc+b%mc)%mc;
    }
    int mul(int a,int b)
    {
        return ((a%mc)*1LL*(b%mc))%mc;
    }
    long long countWays(int n, int k)
    {
        // code here
        // This question require to have knowledge of painting fence algorithm and dp.
        // done after seeing the youtube video editorial.
        // NOTE:->> solving through tabulation.
        // POTD
        // ❌©
        vector<long long>dp(n+1,0);
        int i;
        dp[1]=k;
        dp[2]=add(k,mul(k,k-1));
        for(i=3;i<=n;i++)
        {
            dp[i]=add(mul(dp[i-2],k-1),mul(dp[i-1],k-1));
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends