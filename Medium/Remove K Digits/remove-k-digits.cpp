//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int k) {
        //Code here
        //POTD
        //✅🤝💯😅
        if(S.length()==k){
            return "0";
        }
        stack<char>st;
        int i;
        for(i=0;i<S.length();i++){
            if(!st.empty()&&S[i]<st.top()){
                while(!st.empty()&&k!=0&&S[i]<st.top()){
                    st.pop();
                    k--;
                }
            }
            st.push(S[i]);
        }
        while(!st.empty()&&k){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        i=0;
        while(i<ans.length()&&ans[i]=='0'){
            i++;
        }
        if(i==ans.length())
        return "0";
        return ans.substr(i,ans.length());
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends