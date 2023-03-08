//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        // ✅🤝💯
        // Ye sahi ha medium me.😂
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1;
                int h=n-1;
                while(l<h){
                    vector<int>v;
                    int sum=arr[i]+arr[j]+arr[l]+arr[h];
                    if(sum-k==0){
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[l]);
                        v.push_back(arr[h]);
                        sort(v.begin(),v.end());
                        s.insert(v);
                        l++;
                        h--;
                    }
                    else if(sum>k){
                        h--;
                    }
                    else{
                        l++;
                    }
                }
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends