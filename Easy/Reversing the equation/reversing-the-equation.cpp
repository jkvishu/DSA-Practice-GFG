//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    bool isoperator(char ch)
    {
        if(ch=='+' or ch=='-' or ch=='/' or ch=='*') return true;
        return false;
    }
    string reverseEqn (string s)
        {
            //code here.
            //POTD ✅💯😏
            int n=s.length();
            string temp="",ans="";
            for(int i=n-1;i>=0;i--)
            {
                if(isoperator(s[i]))
                {
                    ans+=temp+s[i];
                    temp="";
                }
                else
                {
                    temp=s[i]+temp;
                }
            }
            if(temp!="") ans+=temp;
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends