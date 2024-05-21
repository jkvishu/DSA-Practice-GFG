//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
         // ✅🤝💯😏
         // POTD
        vector<int>ans;
        int l=0,h=n-1,m;
        int f=0;
        while(l<=h){
            m=(l+h)/2;
            if(arr[m]>x){
                h=m-1;
            }
            else if(arr[m]<x){
                l=m+1;
            }
            else{
                f=1;
                break;
            }
        }
        if(f==1)
        {
            l=m-1;
            h=m+1;
        }
        else
        swap(l,h);
        while(k){
            int f=abs(x-arr[l]);
            int s=abs(x-arr[h]);
            if(l<0){
                ans.push_back(arr[h]);
                h++;
            }
            else if(h>=n){
                ans.push_back(arr[l]);
                l--;
            }
            else if(f<s&&l>=0){
                ans.push_back(arr[l]);
                l--;
            }
            else if(f>=s&&h<n){
                ans.push_back(arr[h]);
                h++;
            }
            k--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends