//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int kPalindrome(string str, int n, int k)
    {
        // code here
        // POTD
        // Tabulation solution
        // ✅💯😏
        string s1=str;
        string s2= str;
        reverse(s2.begin(), s2.end());
        vector<int> dp(n + 1, 0);
        vector<int> cur(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                cur[j] = 1 + dp[j - 1];
            else
                cur[j] = max(dp[j], cur[j - 1]);
        }
        dp = cur;
        }
        int c=dp[n];
        if(n-c<=k)
        return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends