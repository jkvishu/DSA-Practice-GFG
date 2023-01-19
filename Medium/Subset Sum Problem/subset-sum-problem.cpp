//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
     bool subset(int n,int index,vector<int>&arr,int sum,vector<vector<int>>&dp)
    {    
         if(sum==0)
          return true;
        if(index>=n)
          return false;
       if(dp[index][sum]!=-1) 
            return dp[index][sum];
         bool l=subset(n,index+1,arr,sum-arr[index],dp);
          bool r=subset(n,index+1,arr,sum,dp);
          return dp[index][sum]=l||r; 
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        //DP is cpycy[t]
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        int index=0;
         return subset(n,index,arr,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends