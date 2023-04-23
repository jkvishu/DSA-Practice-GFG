//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long maxProduct(int arr[], int n) {
        // code here
        // Jood ✅💯😏😎
        long long a1=INT_MIN,a2=INT_MIN,a3=INT_MIN;
        long long b1=INT_MAX,b2=INT_MAX,b3=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]>=a1){
                a3=a2;
                a2=a1;
                a1=arr[i];
            }
            else if(arr[i]<a1&&a2<=arr[i]){
                a3=a2;
                a2=arr[i];
            }
            else if(arr[i]>=a3){
                a3=arr[i];
            }
            if(b1>=arr[i]){
                b3=b2;
                b2=b1;
                b1=arr[i];
            }
            else if(arr[i]>b1&&b2>=arr[i]){
                b3=b2;
                b2=arr[i];
            }
            else if(b3<=arr[i]){
                b3=arr[i];
            }
        }
        return max(a1*a2*a3,a1*b1*b2);
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends