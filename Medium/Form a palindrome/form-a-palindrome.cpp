//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMinInsertions(string s1){
        // code here 
        // Space Optimized solution.
        // ✅😏💯
        // Same question baby
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
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends