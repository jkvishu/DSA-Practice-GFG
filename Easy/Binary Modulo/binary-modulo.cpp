//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            //POTD - 8/05/2023
            //🤝✅👀
            int ans=0,r=1;
            for(int i=s.length()-1;i>=0;i--){
                if(s[i]=='1')
                ans+=r;
                r=(r*2)%m;
            }
            return ans%m;
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
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends