//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        // Your code here
        // ✅😎😏💯
        unordered_map<char,int>m;
        m['+']=1;
        m['-']=1;
        m['*']=2;
        m['/']=2;
        m['^']=3;
        m['(']=-1;
        stack<char>st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122){
                ans.push_back(s[i]);
            }
            else{
                if(!st.empty()){
                    if(s[i]=='('){
                    st.push('(');
                    continue;
                    }
                    if(s[i]==')')
                    {
                        while(!st.empty()&&st.top()!='('){
                            ans.push_back(st.top());
                            st.pop();
                        }
                        st.pop();
                    }
                    else{
                        while(!st.empty()&&m[s[i]]<=m[st.top()]){
                            ans.push_back(st.top());
                            st.pop();
                        }
                        st.push(s[i]);
                    }
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends