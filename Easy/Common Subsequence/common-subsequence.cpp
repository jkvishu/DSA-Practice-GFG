//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
  /*
	    making my dp soluton TLE lol
	    int n=a.length();
	    int m=b.length();
	    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for (int i = 1; i <= n; i++)
        {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
        }
	    int l=dp[n][m];
	    if(l>0)
	    return 1;
	    else 
	    return 0;
	    */
	bool commonSubseq (string a, string b)
	{
	    // your code here
	    // ✅💯😏
	    int arr[26]={0};
	    for(int i=0;i<a.length();i++){
	        arr[a[i]-'A']++;
	    }
	    for(int j=0;j<b.length();j++){
	        if(arr[b[j]-'A']>0)
	        return 1;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--) 
	{
		string a, b; cin >> a >> b;
		Solution ob;
		cout << ob.commonSubseq (a, b) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends