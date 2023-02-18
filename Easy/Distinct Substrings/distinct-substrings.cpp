//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    //code here
    //✅💯😏
    unordered_set<string>ans;
    for(int i=0;i<s.length()-1;i++){
        ans.insert(s.substr(i,2));
    }
    return ans.size();
}