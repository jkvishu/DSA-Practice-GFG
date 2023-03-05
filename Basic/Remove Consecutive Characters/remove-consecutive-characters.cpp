//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        // ✅💯😏
        string ans="";
        int j=0;
        ans.push_back(S[0]);
        for(int i=1;i<S.length();i++){
            if(S[i]!=ans[j])
            {
                ans.push_back(S[i]);
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends