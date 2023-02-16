//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    // your code here
    //✅💯
    int a[26]={0},b[26]={0},ans=0;
    for(int i=0;i<S1.length();i++){
        a[S1[i]-'a']++;
    }
    for(int i=0;i<S2.length();i++){
        b[S2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        ans+=abs(a[i]-b[i]);
    }
    return ans/2;
}