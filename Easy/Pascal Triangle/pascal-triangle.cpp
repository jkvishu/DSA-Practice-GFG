//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        // ✅😏🤝💯
        vector<long long>ans(2,0);
        ans[0]=1;
        long long int mod=1e9+7;
        for(int i=0;i<n-1;i++){
            ans.insert(ans.begin(),0);
            for(int j=0;j<ans.size()-1;j++){
                ans[j]=(ans[j]+ans[j+1])%mod;
            }
        }
        ans.pop_back();
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends