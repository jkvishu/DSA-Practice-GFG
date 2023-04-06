//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) {
        // code here
        // ✅💯😏
        string ans="";
        int a[26]={0};
        for(int i=0;i<s1.length();i++){
            a[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            a[s2[i]-'a']=0;
        }
        for(int i=0;i<s1.length();i++){
            if(a[s1[i]-'a']>0){
                ans.push_back(s1[i]);
            }
            a[s1[i]-'a']--;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends