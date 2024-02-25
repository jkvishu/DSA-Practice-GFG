//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    /*
    vector<int>numbers;
    int solve(int r,int i){
        if(r==0)
        return 1;
        if(i>=3||r<0)
        return 0;
        return solve(r-numbers[i],i)+solve(r,i+1);
    }
    long long int count(long long int n)
    {
    	// Your code here
    	// Recursive solution for the problem
    	// Can't figure out the recursion also
    	// 🤝👀© 
    	// TLE
    	numbers.push_back(3);
    	numbers.push_back(5);
    	numbers.push_back(10);
    	return solve(n,0);
    }
    */
    long long int count(long long int n)
    {
        // Your code here
        // DP solution
        // 🤝✅💯
        // POTD 25/02/2024
        int dp[n+1]={0};
        dp[0]=1;
        for(int i=3;i<=n;i++){
            dp[i]+=dp[i-3];
        }
         for(int i=5;i<=n;i++){
            dp[i]+=dp[i-5];
        }
         for(int i=10;i<=n;i++){
            dp[i]+=dp[i-10];
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
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends