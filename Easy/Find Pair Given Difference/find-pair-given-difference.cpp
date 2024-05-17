//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findPair(int n, int c, vector<int> &arr) {
        // code here
        //✅💯😏
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
        int x=c+arr[i];
        int l=i+1,h=n-1,m;
        while(l<=h){
            m=(l+h)/2;
            if(arr[m]>x){
                h=m-1;
            }
            else if(arr[m]<x){
                l=m+1;
            }
            else{
                if(m!=i)
                return 1;
            }
        }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.findPair(n, x, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends