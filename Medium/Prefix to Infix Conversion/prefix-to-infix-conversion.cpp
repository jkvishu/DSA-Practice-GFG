//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        // ✅🤝👀
        reverse(pre_exp.begin(),pre_exp.end());
        stack<string>st;
        int n=pre_exp.length();
        for(int i=0;i<n;i++){
            if(isalpha(pre_exp[i])){
                string temp="";
                temp+=pre_exp[i];
                st.push(temp);
            }
            else{
                string p1=st.top();
                st.pop();
                string p2=st.top();
                st.pop();
                st.push("("+p1+pre_exp[i]+p2+")");
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends