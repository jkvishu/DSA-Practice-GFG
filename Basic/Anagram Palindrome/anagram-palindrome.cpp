//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    //✅💯
    if(S.length()==1)
    return 1;
    int a[26]={0},c=0;
    for(int i=0;i<S.length();i++){
        a[S[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]%2!=0)
        c++;
    }
    if(c<=1)
    return 1;
    else 
    return 0;
}