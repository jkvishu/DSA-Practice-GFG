//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        //POTD 28/02/2024
        //✅😏💯
        int n=s.length();
        int r=0,f;
        for(int i=0;i<n;i++){
            int x=s[i]-'0';
            f=(r*10)+x;
            r=f%8;
        }
        if(r==0)
        return 1;
        else
        return -1;
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
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends