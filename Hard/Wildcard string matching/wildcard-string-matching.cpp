//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool match(string pat, string str)
    {
        // code here
        // Direct solution
        // Already solved this question earlier
        // Space Optimized solution.
        // ✅😏💯
        int n = pat.length();
        int m = str.length();
        vector<bool> dp(m + 1, false);
        vector<bool> cur(m + 1, false);
        dp[0] = true;
        for (int i = 1; i <= n; i++)
        {
        bool f = true;
        for (int j = 1; j <= i; j++)
        {
            if (pat[j - 1] != '*')
            {
                f = false;
                break;
            }
        }
        cur[0] = f;
        for (int j = 1; j <= m; j++)
        {
            if (pat[i - 1] == str[j - 1] || pat[i - 1] == '?')
                cur[j] = dp[j - 1];
            else if (pat[i - 1] == '*')
                cur[j] = dp[j] | cur[j - 1];
            else
                cur[j] = false;
        }
        dp = cur;
        }
        return dp[m];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends