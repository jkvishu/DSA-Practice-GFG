//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> addOne(int a[], int n) {
        // code here
        // ✅💯😏🥱
        vector<int>ans;
        int r=1,i=n-1;
        while(i>=0&&r){
            int x=a[i]+r;
            if(x>9){
                ans.push_back(0);
            }
            else{
                ans.push_back(x);
                r=0;
            }
            i--;
        }
        if(r!=0)
        ans.push_back(r);
        while(i>=0){
            ans.push_back(a[i]);
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto x : ans) {
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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.addOne(a, n);
        printAns(ans);
    }
    return 0;
}
// } Driver Code Ends