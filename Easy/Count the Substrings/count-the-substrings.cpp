//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        // ✅💯😏
        int c1=0,c2=0;
        int ans=0;
        for(int i=0;i<S.length();i++){
            for(int j=i;j<S.length();j++){
                if(S[j]>=65&&S[j]<=90)
                c1++;
                else
                c2++;
                if(c1==c2)
                ans++;
            }
            c1=c2=0;
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
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends