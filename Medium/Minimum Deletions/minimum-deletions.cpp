//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int solve(string s1,string s2)
  {
      int n=s1.length();
      int m=n;
      int t[m+1][n+1]={0,0},i,j;
      for(i=0;i<m+1;i++)
      {
          for(j=0;j<n+1;j++)
          {
              if(i==0||j==0)
              t[i][j]=0;
          }
      }
      for(i=1;i<m+1;i++)
      {
          for(j=1;j<n+1;j++)
          {
              if(s1[i-1]==s2[j-1])
              t[i][j]=1+t[i-1][j-1];
              else
              t[i][j]=max(t[i-1][j],t[i][j-1]);
          }
      }
      return t[m][n];
  }
    int minimumNumberOfDeletions(string S) 
    { 
        // code here
        // POTD ✅💯😏
        int lps,n=S.length();
        string k="";
        k=S;
        reverse(k.begin(),k.end());
        lps=solve(S,k);
        lps=n-lps;
        return  lps;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends