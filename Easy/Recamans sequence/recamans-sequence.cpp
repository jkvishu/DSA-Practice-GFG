//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        // POTD
        // ✅💯😏
        if(n==1)
        return {0};
        unordered_set<int>s;
        vector<int>dp(n);
        s.insert(0);
        dp[0]=0;
        for(int i=1;i<n;i++){
            if((dp[i-1]-i)<=0)
            dp[i]=dp[i-1]+i;
            else{
            if(s.find(dp[i-1]-i)==s.end())    
            dp[i]=dp[i-1]-i;
            else
            dp[i]=dp[i-1]+i;
            }
            s.insert(dp[i]);
        }
        return dp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends