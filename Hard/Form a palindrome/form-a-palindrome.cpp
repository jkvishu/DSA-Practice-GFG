//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string s1){
    // complete the function here
    // Direct approach likr rha hu
    // Kyu ki bhut zada related ha to old questions that i have done before and are matching to this.
    // Space Optimized solution.
    // ✅😏💯
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    int n = s1.length();
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
    return n-dp[n];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends