//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    static bool cmp(struct val k,struct val l){
        return k.second<l.second;
    }
    /*You are required to complete this method*/
    /*int maxChainLen(struct val p[],int n){
        //Your code here
        //✅🤝💯😏
        //only 5 test case does not passed with this method.
        sort(p,p+n,cmp);
        int dp[n];
        dp[0]=1;
        for(int i=1;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(p[i].first>p[j].second){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,dp[i]);
        }
        return ans;
    }*/
    int maxChainLen(struct val p[],int n){
        //✅🤝💯😏
        //Greedy approach
        sort(p,p+n,cmp);
        int ans=1,f=p[0].second;
        for(int i=1;i<n;i++){
            if(f<p[i].first){
                ans++;
                f=p[i].second;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends