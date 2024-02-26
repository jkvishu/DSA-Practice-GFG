//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    /*
    void find(int w,int wt[],int val[],int n,int i,int &ans,int cal){
        if(i==n||w==0){
            ans=max(ans,cal);
            return;
        }
        if(wt[i]<=w)
        find(w-wt[i],wt,val,n,i+1,ans,cal+val[i]);
        find(w,wt,val,n,i+1,ans,cal);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       // Recursive solution
       // ✅😏💯
       int ans=0;
       find(W,wt,val,n,0,ans,0);
       return ans;
    }
    
    //Another recursive approach
    int find(int W, int wt[], int val[], int n){
       if(n==0){
           if(wt[0]<=W)
           return val[0];
           return 0;
       }
       int ntpick=0+find(W,wt,val,n-1);
       int pick=INT_MIN;
       if(wt[n]<=W)
       pick=val[n]+find(W-wt[n],wt,val,n-1);
       return max(pick,ntpick);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       return find(W,wt,val,n-1);
    }
    */
    
    int find(int W, int wt[], int val[], int n,vector< vector<int> >&dp){
       if(n==0){
           if(wt[0]<=W)
           return val[0];
           return 0;
       }
       if(dp[n][W]!=-1)
       return dp[n][W];
       int ntpick=0+find(W,wt,val,n-1,dp);
       int pick=INT_MIN;
       if(wt[n]<=W)
       pick=val[n]+find(W-wt[n],wt,val,n-1,dp);
       return dp[n][W]=max(pick,ntpick);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    {
        // Memoization solution for the problem.
        // ✅😏💯
        vector< vector<int> >dp(n,vector<int>(W+1,-1));
        return find(W,wt,val,n-1,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends