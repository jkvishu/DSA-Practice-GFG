//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    {
        // Your code here
        // ✅🤝👀©
        long long int dp[N+1];
        int m=1e9+7;
        dp[0]=1;
        for(int i=1;i<=N;i++){
            dp[i]=0;
            for(int j=0;j<i;j++){
                dp[i]=(dp[i]%m+(dp[j]%m*dp[i-j-1]%m)%m)%m;
            }
        }
        return dp[N]%m;
    }
};

//{ Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	
// } Driver Code Ends