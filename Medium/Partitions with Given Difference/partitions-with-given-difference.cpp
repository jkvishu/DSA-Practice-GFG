//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mod=1e9+7;
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        // Direct optimal approach Striver baba
        // ✅💯😏🤝
        // POTD
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum-d<0||(sum-d)%2!=0)
        return 0;
        sum=(sum-d)/2;
        vector<int>dp(sum+1,0);
        vector<int>cur(sum+1,0);
        if(arr[0]==0) 
        dp[0]=2;
        else 
        dp[0]=1;
        if(arr[0]!=0 && arr[0] <= sum) 
        dp[arr[0]]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=sum;j++){
                int pick=0;
                if(arr[i]<=j)
                pick=dp[j-arr[i]];
                int ntpick=dp[j];
                cur[j]=(pick+ntpick)%mod;
            }
            dp=cur;
        }
        return dp[sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends