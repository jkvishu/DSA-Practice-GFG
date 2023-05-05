//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends
// Complete this function
long long int count(long long int n)
{
	// If 0 sum is required number of ways is 1.
	// Your code here
	// ✅💯👀😏©👀
	   long long int pack[3];
	   pack[0]=3;
	   pack[1]=5;
	   pack[2]=10;      
       int dp[n+1]={0};
       dp[0]=1;
       for(int i=0;i<3;i++){
           for(int j=pack[i];j<=n;j++){
               dp[j]+=dp[j-pack[i]];
           }
       }
       return dp[n];

}

//{ Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends