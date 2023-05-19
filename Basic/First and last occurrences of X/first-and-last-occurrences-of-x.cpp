//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
         vector<int> v;
       int start =0, end=n-1;
       while(start<=end){
           if(arr[start] != x)start++;
           if(arr[end] != x)end--;
           if(start<=end && arr[start] == x && arr[end] == x){
               v.push_back(start);
               v.push_back(end);
               break;
           }
       }
       if(v.size() == 0)v.emplace_back(-1);
       return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends