//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       // ✅💯😏
       if(x.length()==1)
       return (x[0]-'0')%11;
       int ans=(x[0]-'0')*10;
       ans+=(x[1]-'0');
       ans=ans%11;
       for(int i=2;i<x.length();i++){
           ans=(ans*10)+(x[i]-'0');
           ans=ans%11;
       }
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
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends