//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool comp(string s1,string s2)
	    {
	        return s1+s2>s2+s1;
	    }
	string printLargest(int n, vector<string> &arr) {
	    // code here
	     // POTD ✅🤝👀
	    // 3/03/2024
	    sort(arr.begin(),arr.end(),comp);
	    string st="";
	    for(int i=0;i<n;i++)
	    {
	        st+=arr[i];
	    }
	    return st;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends