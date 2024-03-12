//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int mod=1e9+7;
    /*
    int find(int n,int m,string s,string t){
        if(m<0)
        return 1;
        if(n<0)
        return 0;
        if(s[n]==t[m]){
            return (find(n-1,m-1,s,t)+find(n-1,m,s,t));
        }
        else
        return find(n-1,m,s,t);
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
      //Brute force but this was the approach of striver not mine i was not able to figure out the recusrive relation to solve this problem.
      //✅🤝🫠👀💯
      //TLE
      //Recursive approach
      int n=s.length();
      int m=t.length();
      return find(n-1,m-1,s,t);
    }
    */
     int find(int n,int m,string s,string t,vector<vector<int>>&dp){
        if(m<0)
        return 1;
        if(n<0)
        return 0;
        if(dp[n][m]!=-1)
        return dp[n][m];
        if(s[n]==t[m]){
            return dp[n][m]=(find(n-1,m-1,s,t,dp)+find(n-1,m,s,t,dp))%mod;
        }
        else
        return dp[n][m]=find(n-1,m,s,t,dp)%mod;
    }
    int subsequenceCount(string s, string t)
    {
       // Your code here
       // Memoization solution for the problem.
       // ✅😏💯
      int n=s.length();
      int m=t.length();
      vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
      return find(n-1,m-1,s,t,dp)%mod;
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends