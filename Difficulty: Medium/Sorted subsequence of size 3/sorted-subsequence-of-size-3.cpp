//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2) {
    int m = v2.size();
    int n = v1.size();
    int j = 0; // For index of v2

    // Traverse v1 and v2
    for (int i = 0; i < n && j < m; i++) {
        if (v1[i] == v2[j]) {
            j++;
        }
    }
    return (j == m);
}


// } Driver Code Ends
// Function to find three numbers in the given array
// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int N=arr.size();
         int mini=INT_MAX,maxi=INT_MIN;
       int mina[N],maxa[N];
       vector<int>ans;
       for(int i =0;i<N;i++){
           if(arr[i]<mini){
               mini=arr[i];
           }
           mina[i]=mini;
       }
       for(int i=N-1;i>=0;i--){
           if(arr[i]>maxi){
               maxi=arr[i];
           }
           maxa[i]=maxi;
       }
       for(int i=0;i<N;i++){
           if(arr[i]>mina[i] && arr[i]<maxa[i]){
               ans.push_back(mina[i]);
               ans.push_back(arr[i]);
               ans.push_back(maxa[i]);
               return ans;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution obj;
        auto res = obj.find3Numbers(arr);
        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and isSubSequence(arr, res)) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends