//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string s1, string s2) 
	{ 
	    // Your code goes here
	    int m=s2.length();
        int n=s1.length();
        vector<int> dp(m + 1, 0);
        vector<int> cur(m + 1, 0);
        for (int i = 1; i <= n; i++)
        {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                cur[j] = 1 + dp[j - 1];
            else
                cur[j] = max(dp[j], cur[j - 1]);
        }
        dp = cur;
        }
        int ans=dp[m];
        int x=n-ans;
        x+=abs(m-ans);
        return x;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends