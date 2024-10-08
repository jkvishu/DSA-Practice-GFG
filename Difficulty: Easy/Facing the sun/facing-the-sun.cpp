//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &h) {
        // code here
        int n=h.size();
        if(n>1)
	    {
	    int mx=h[0],c=1;
	    for(int i=1;i<n;i++)
	    {
	        if(h[i]>mx)
	        {
	            mx=h[i];
	            c++;
	        }
	    }
	    return c;
	    }
	    else
	    {
	        return 1;
	    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> height;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            height.push_back(number);
        }
        Solution ob;
        int ans = ob.countBuildings(height);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends