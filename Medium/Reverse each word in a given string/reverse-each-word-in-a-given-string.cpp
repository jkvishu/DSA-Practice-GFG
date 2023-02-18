//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        //✅💯😏
        string ans="";
        reverse(s.begin(),s.end());
        int j=s.length();
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='.'){
                ans+=s.substr(i+1,j-i-1)+".";
                j=i;
            }
        }
        ans+=s.substr(0,j);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends