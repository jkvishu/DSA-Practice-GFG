//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        // Damn easy BS ✅
        int l=0,h=n-1,j,c=0,m;
        while(l<=h){
            m=(l+h)/2;
            if(arr[m]==1){
                l=m+1;
            }
            else{
                break;
            }
        }
        j=m;
        while(j>=0&&arr[j]==arr[m]){
            j--;
            c++;
        }
        j=m+1;
        while(j<n&&arr[j]==arr[m]){
            j++;
            c++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends