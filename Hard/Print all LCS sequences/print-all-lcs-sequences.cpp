//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void find(vector<vector<int>> &dp, int n, int m, string temp, set<string> &ans, string &s, string &t, int l)
{
    if (temp.length() == l)
    {
        reverse(temp.begin(), temp.end());
        ans.insert(temp);
        return;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = m; j > 0; j--)
        {
            if (s[i - 1] == t[j - 1])
            {
                find(dp, i - 1, j - 1, temp + s[i - 1], ans, s, t, l);
            }
        }
    }
}
vector<string> all_longest_common_subsequences(string s, string t)
{
    // Code here
    // ✅🤝💯🫠
    set<string> ans;
    vector<string>fans;
    int n = s.length();
    int m = t.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int l = dp[n][m];
    string temp = "";
    find(dp, n, m, temp, ans, s, t, l);
    for(auto x:ans){
        fans.push_back(x);
    }
    return fans;
}
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	vector<string> ans = ob.all_longest_common_subsequences(s, t);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}


// } Driver Code Ends