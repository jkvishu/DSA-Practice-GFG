//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string a) {
        //code here
        string b;
    
        int n=a.length();
        for(int i=n-1;i>=0;i--){
            b.push_back(a[i]);
        }
        int c[n+1][n+1];
        for(int i=0;i<=n;i++)
        c[i][0]=0;
         for(int i=0;i<=n;i++)
        c[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1]==b[j-1])
                    c[i][j]=c[i-1][j-1]+1;
                    else if(c[i-1][j]>=c[i][j-1])
                    c[i][j]=c[i-1][j];
                    else
                    c[i][j]=c[i][j-1];
                }
            }
            
             return c[n][n];
        
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends