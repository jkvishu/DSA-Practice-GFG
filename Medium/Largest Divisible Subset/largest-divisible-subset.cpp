//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> LargestSubset(int n, vector<int>& arr) {
        // Code here
        // ✅🤝💯🫠
        sort(arr.begin(),arr.end());
        vector<int>dp(n,1),hash(n);
        int mx=1;
        int ls=0;
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0&&1+dp[j]>dp[i]){
                    hash[i]=j;
                    dp[i]=1+dp[j];
                }
            }
            if(dp[i]>mx){
                mx=dp[i];
                ls=i;
            }
        }
        vector<int>ans;
        ans.push_back(arr[ls]);
        while(hash[ls]!=ls){
            ls=hash[ls];
            ans.push_back(arr[ls]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        vector<int> res = obj.LargestSubset(n, arr);
        int isValidSeq = 1, sz = res.size();
        for (int i = 0; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                if ((res[i] % res[j]) == 0 || (res[j] % res[i]) == 0)
                    continue;
                else {
                    isValidSeq = 0;
                    break;
                }
            }
        }
        cout << isValidSeq << " " << sz << endl;
    }
    return 0;
}
// } Driver Code Ends