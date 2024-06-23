//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string S) {
        // Your code goes here
        // POTD
        // ✅😏💯
         vector<int> v;
	    stack<int>s;
	    int i,n=S.length(),c=0,k;
	    for(i=0;i<n;i++)
	    {
	        if(S[i]=='(')
	        {
	            c++;
	            s.push(c);
	            v.push_back(c);
	        }
	        else if(S[i]==')')
	        {
	            k=s.top();
	            s.pop();
	            v.push_back(k);
	        }
	    }
	    return v;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends