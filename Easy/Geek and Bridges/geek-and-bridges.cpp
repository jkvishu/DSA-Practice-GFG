#include<bits/stdc++.h>
using namespace std;
int find(string &s1,string &s2){
    int n=s1.length();
    int m=s2.length();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=m;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}
int main()
 {
	//code
    // cout<<"Hello there I am Vishu";
    // cout<<"Welcome to my profile";
    // Done by me on my own.
    // ✅😏💯
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        cout<<find(s1,s2);
        cout<<endl;
    }
	return 0;
}