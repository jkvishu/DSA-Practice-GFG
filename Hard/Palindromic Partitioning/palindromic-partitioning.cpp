//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool ispal(string st)
    {
        int i=0,n=st.length()-1;
        while(i<n){
            if(st[i]!=st[n])
            return 0;
            i++;
            n--;
        }
        return 1;
    }
    /*
    int find(int i,int n,string st){
        if(i==n)
        return 0;
        int ans=INT_MAX;
        string temp="";
        for(int j=i;j<n;j++){
            temp+=st[j];
            if(ispal(temp))
            {
                int cst=1+find(j+1,n,st);
                ans=min(ans,cst);
            }
        }
        return ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        // Recursive Solution
        // ✅😏💯
        // TLE
        int n=str.length();
        return find(0,n,str)-1;
    }
    */
    int find(int i,int n,string st,vector<vector<int>>&dp){
        if(i==n)
        return 0;
        if(dp[i][i]!=-1)
        return dp[i][i];
        int ans=INT_MAX;
        string temp="";
        for(int j=i;j<n;j++){
            temp+=st[j];
            if(ispal(temp))
            {
                int cst=1+find(j+1,n,st,dp);
                ans=min(ans,cst);
            }
        }
        return dp[i][i]=ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        // Memoization solution for the problem.
        // ✅😏💯
        int n=str.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return find(0,n,str,dp)-1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends