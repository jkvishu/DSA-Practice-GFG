//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  /*
    void find(int &ans,int i,int k,int cal,vector<vector<int>>& points,int n){
        if(i==n)
        {
            ans=max(ans,cal);
            return;
        }
        for(int j=0;j<3;j++){
            if(j!=k){
            cal+=points[i][j];
            find(ans,i+1,j,cal,points,n);
            cal-=points[i][j];
            }
        }
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        // ✅💯😏
        // BRute force apprioach using recursion
        int ans=INT_MIN;
        find(ans,0,-1,0,points,n);
        return ans;
    }
    */
    int find(int dp[][4],vector<vector<int>>& points,int n,int l){
        if(n==0){
            int mx=0;
            for(int i=0;i<3;i++){
                if(i!=l){
                    mx=max(mx,points[0][i]);
                }
            }
            return mx;
        }
        if(dp[n][l]!=-1)
        return dp[n][l];
        int mx=0;
        for(int i=0;i<3;i++){
            if(i!=l){
                int st=points[n][i]+find(dp,points,n-1,i);
                mx=max(mx,st);
            }
        }
        return dp[n][l]=mx;
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        // ✅💯😏
        // More optimized solution using memoization.
        int dp[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                dp[i][j]=-1;
            }
        }
        return find(dp,points,n-1,3);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends