//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  /*
    void find(int i,int n,vector<vector<int>>& triangle,int &ans,int cal){
        if(i>=n){
            ans=min(ans,cal);
            return;
        }
        for(int j=0;j<i;j++){
            for(int k=0;k<2;k++){
                if(k==0){
                    cal+=triangle[i][j];
                    find(i+1,n,triangle,ans,cal);
                    cal-=triangle[i][j];
                }
                else{
                    cal+=triangle[i][j+1];
                    find(i+1,n,triangle,ans,cal);
                    cal-=triangle[i][j+1];
                }
            }
        }
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
        // Brute force approach
        // Mine Own recursive solution.
        // ✅💯😏
        int ans=INT_MAX;
        find(1,n,triangle,ans,triangle[0][0]);
        return ans;
    }
    */
    int  find(vector<vector<int>>&dp,int i,int j,int n,vector< vector<int> >& triangle){
    if(i==n-1)
    return triangle[n-1][j];
    if(j>i)
    return INT_MAX;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int down=triangle[i][j]+find(dp,i+1,j,n,triangle);
    int left=triangle[i][j]+find(dp,i+1,j+1,n,triangle);
    return dp[i][j]=min(down,left);
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Optimal approach
        // Mine Own memoization solution.
        // ✅💯😏
        vector<vector<int>>dp;
        for(int i=0;i<n;i++){
            vector<int>temp;
        for(int j=0;j<i+1;j++){
         temp.push_back(-1);
        }
         dp.push_back(temp);
        }
    return find(dp,0,0,n,triangle);
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends