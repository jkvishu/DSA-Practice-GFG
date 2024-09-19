//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string S) {
        // code here
        string ans="",ax="";
        int i=S.length()-1;
        int j=i;
        while(i>=0){
            while(i>=0&&S[i]!='.'){
                i--;
            }
            if(i>=0){
            ans+=S.substr(i+1,j-i)+".";
            j=i-1;
            }
            i--;
        }
        for(int i=0;i<S.length();i++){
            if(S[i]!='.')
            ax.push_back(S[i]);
            else 
            break;
        }
        ans+=ax;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends