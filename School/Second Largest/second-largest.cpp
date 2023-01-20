//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    //Done in just one iteration
	    int i,mx=arr[0],mn=INT_MIN;
	    for(i=1;i<n;i++){
	        if(arr[i]>mx){
	            mn=mx;
	            mx=arr[i];
	        }
	        else if(arr[i]<mx){
	            mn=max(mn,arr[i]);
	            }
	    }
	    if(mn==INT_MIN)
	    return -1;
	    return mn;
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends