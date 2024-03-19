//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    static bool cp(string &s1,string &s2){
        return s1.size()<s2.size();
    }
    bool comp(string s1,string s2){
        if(s1.size()!=s2.size()+1)
        return false;
        int i=0,j=0;
        while(i<s1.size()){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }
            else
            i++;
        }
        if(j==s2.size()&&i==s1.size())
        return true;
        return false;
    }
    /*
    int find(int i, int prv, int n, vector<string>& a)
    {
    if (i == n)
    {
        return 0;
    }
    int len = 0 + find(i + 1, prv, n, a);
    if (prv == -1 || comp(a[i],a[prv]))
        len = max(len, 1 + find(i + 1, i, n, a));
    return len;
    }
    int longestChain(int n, vector<string>& words) {
        // Code here
        // TLE
        // Recursive solution
        // ✅😏💯
        sort(words.begin(),words.end(),cp);
        return find(0,-1,n,words);
    }
    */
    
    int longestChain(int n, vector<string>& words) {
        // Code here
        // ✅🤝💯🫠
        sort(words.begin(),words.end(),cp);
    vector<int> dp(n, 1);
    int mx = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (comp(words[i],words[j])&&1 + dp[j] > dp[i])
            {
                dp[i] = 1 + dp[j];
            }
        }
        mx=max(mx,dp[i]);
    }
    return mx;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> words(N);
        for (int i = 0; i < N; i++) {
            cin >> words[i];
        }
        Solution obj;
        cout << obj.longestChain(N, words) << "\n";
    }
    return 0;
}
// } Driver Code Ends