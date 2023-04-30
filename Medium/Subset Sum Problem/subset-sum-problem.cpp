//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        // DP solution 
        // 👀✅🤝©
        // LITTLe correction from the solution of GFG-C.
        int m=1e9+7;
        int n=arr.size();
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int j=1;j<=sum;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j<arr[i-1])
                dp[i][j]=dp[i-1][j]%m;
                else
                dp[i][j]=(dp[i-1][j]%m+dp[i-1][j-arr[i-1]]%m)%m;
            }
        }
        if(dp[n][sum]>0)
        return 1;
        return 0;
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