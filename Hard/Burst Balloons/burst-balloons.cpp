//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
/*
    int find(int i,int j,vector<int> &arr){
        if(i>j)
        return 0;
        int mn=INT_MIN;
        for(int k=i;k<=j;k++){
            int steps=arr[i-1]*arr[k]*arr[j+1]+find(i,k-1,arr)+find(k+1,j,arr);
            mn=max(steps,mn);
        }
        return mn;
    }
    int maxCoins(int N, vector<int> &arr) {
        // code here
        // Recursive Code 
        // TLE
        // ✅😏💯
        arr.push_back(1);
        arr.insert(arr.begin(),1);
        return find(1,N,arr);
    }
    */
    int find(int i,int j,vector<int> &arr,vector<vector<int>> &dp){
        if(i>j)
        return 0;
        int mn=INT_MIN;
        if(dp[i][j]!=-1)
        return dp[i][j];
        for(int k=i;k<=j;k++){
            int steps=arr[i-1]*arr[k]*arr[j+1]+find(i,k-1,arr,dp)+find(k+1,j,arr,dp);
            mn=max(steps,mn);
        }
        return dp[i][j]=mn;
    }
    int maxCoins(int N, vector<int> &arr) {
        // code here
        // Memoization solution for the problem.
        // ✅😏💯
        arr.push_back(1);
        arr.insert(arr.begin(),1);
        vector<vector<int>> dp(N + 1, vector<int>(N + 1, -1));
        return find(1,N,arr,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends