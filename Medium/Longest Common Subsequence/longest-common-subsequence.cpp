//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int find(vector<vector<int>>&dp,string s1,string s2,int x,int y){
        if(dp[x][y]==-1){
            if(x==0||y==0)
            dp[x][y]=0;
            else
            {
               if(s1[x-1]==s2[y-1])
               dp[x][y]=1+find(dp,s1,s2,x-1,y-1);
               else
               dp[x][y]=max(find(dp,s1,s2,x,y-1),find(dp,s1,s2,x-1,y));
            }
        }
        return dp[x][y];
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        // Dynammic programing memoization method
        // ✅💯🤝👀
        vector<vector<int>>dp(x+1,vector<int>(y+1,-1));
        for(int i=0;i<x+1;i++){
            for(int j=0;j<y+1;j++){
                dp[i][j]=-1;
            }
        }
        return find(dp,s1,s2,x,y);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends