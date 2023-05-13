//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    // 🤣
    int i=0,j=0,n=S1.length(),m=S2.length();
    string ans="";
    while(i<n&&j<m){
        ans.push_back(S1[i]);
        ans.push_back(S2[j]);
        i++;
        j++;
    }
    while(i<n){
        ans.push_back(S1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(S2[j]);
        j++;
    }
    return ans;
}