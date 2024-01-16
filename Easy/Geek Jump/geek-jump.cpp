//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  /*void find(vector<int>&a,int n,int i,int &ans,int cal){
    if(i==n-1){
        ans=min(ans,cal);
        return;
    }
    if(i>=n)
    return;
    for(int j=1;j<=2;j++){
        if(i+j<n){
            cal+=abs(a[i]-a[i+j]);
            find(a,n,i+j,ans,cal);
            cal-=abs(a[i]-a[i+j]);
        }
    }
}
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        // Recursion
        int ans=INT_MAX;
        find(height,n,0,ans,0);
        return ans;
    }*/
    int find(int dp[],vector<int>&a,int n){
    if(n==0){
      return dp[n];
    }
    if(dp[n]!=-1)
    return dp[n];
    int left=find(dp,a,n-1)+abs(a[n]-a[n-1]);
    int right=INT_MAX;
    if(n>1)
    right=find(dp,a,n-2)+abs(a[n]-a[n-2]);
    return dp[n]=min(left,right);
    }
   
    int minimumEnergy(vector<int>& height, int n) {
        // Striver Op
        // ✅💯😏🤝
         int dp[n+1];
         for(int i=0;i<n+1;i++){
             dp[i]=-1;
         }
         dp[0]=0;
         return find(dp,height,n-1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends