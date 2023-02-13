//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            // code here 
            // 💯✅😏
            unordered_map<int,int>m;
            int sum=0,ans=0;
            int arr3[n]={0};
            for(int i=0;i<n;i++){
                arr3[i]=arr1[i]-arr2[i];
            }
            for(int i=0;i<n;i++){
                sum+=arr3[i];
                if(sum==0)
                ans=i+1;
                if(m.find(sum)!=m.end())
                ans=max(ans,i-m[sum]);
                if(m.find(sum)==m.end())
                m[sum]=i;
            }
            return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends