//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    int wildCard(string pat, string str) {
        // code here
        // POTD
         int n=pat.length();
          int m=str.length();
          vector<bool>dp(m+1,false);
          vector<bool>cur(m+1,false);
          dp[0]=true;
          for(int i=1;i<=n;i++){
              bool f=true;
              for(int j=1;j<=i;j++){
                if(pat[j-1]!='*')
                {
                    f=false;
                    break;
                }
                }
              cur[0]=f;
              for(int j=1;j<=m;j++){
                  if(pat[i-1]==str[j-1]||pat[i-1]=='?')
                  cur[j]=dp[j-1];
                  else if(pat[i-1]=='*')
                  cur[j]=dp[j]|cur[j-1];
                  else 
                  cur[j]=false;
              }
              dp=cur;
          }
          return dp[m];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends