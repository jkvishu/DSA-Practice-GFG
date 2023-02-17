//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    //✅💯
    int a[26]={0},ans=0,j=0;
    for(int i=0;i<S.length();i++){
        a[S[i]-'a']++;
        if(a[S[i]-'a']==1){
            ans=max(ans,i-j+1);
        }
        else{
            while(j<i&&a[S[i]-'a']>1){
                a[S[j]-'a']--;
                j++;
            }
        }
    }
    return ans;
}