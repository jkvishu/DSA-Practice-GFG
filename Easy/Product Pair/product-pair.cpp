//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        // code here
        // ✅💯😏🤝
        // Value can be very big therefore it was required to use long double to store values
        unordered_map<long double,int>m;
        for(int i=0;i<n;i++){
            long double f=(long double)x/(long double)arr[i];
            if(m.find(f)!=m.end())
            return 1;
            m[arr[i]/1.0]++;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
// } Driver Code Ends