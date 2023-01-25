//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    //Done in First attempt with my own logic.
    int ans=0,ans1=0,i;
    for(i=0;i<S.length();i++){
        if(i%2==0){
            if(S[i]!='0'){
                ans++;
            }
        }
        else{
            if(S[i]!='1'){
                ans++;
            }
        }
    }
    for(i=0;i<S.length();i++){
        if(i%2==0){
            if(S[i]!='1'){
                ans1++;
            }
        }
        else{
            if(S[i]!='0'){
                ans1++;
            }
        }
    }
    return min(ans,ans1);
}