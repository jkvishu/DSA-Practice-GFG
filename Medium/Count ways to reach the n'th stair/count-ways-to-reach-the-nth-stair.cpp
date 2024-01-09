//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    /*
    // Recursive way to solve the problem.
    void find(int n,int &ans){
    if(n==0){
        ans++;
        return; 
    }
    if((n-1)>=0)
    find(n-1,ans);
    if((n-2)>=0)
    find(n-2,ans);
}
    int countWays(int n)
    {
        // your code here
        int ans=0;
        find(n,ans);
        return ans;
    }*/
    int countWays(int n)
    {
        //✅😏💯
        int a,b,c;
        int mod=1e9+7;
        a=0;
        b=1;
        for(int i=2;i<(n+2);i++){
            c=(a+b)%mod;
            a=b;
            b=c;
        }
        return c%mod;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends