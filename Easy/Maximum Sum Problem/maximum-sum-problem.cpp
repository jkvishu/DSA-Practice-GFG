//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int solve(int n){
        if(n<=0)return 0;
        if(n==2)return 2;
        if(n==1||n==3||n==4)return n;
        
        int A=max(n/2,solve(n/2));
        int B=max(n/3,solve(n/3));
        int C=max(n/4,solve(n/4));
        
        return A+B+C;
    }
        int maxSum(int n)
        {
            //code here.
            // POTD 24/02/2024
            //❌🤝©👀
            if(n<=10)return n;
            int ans=max(n/2+n/3+n/4,solve(n));
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
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends