//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    // POTD
	    // ✅😏💯
	    string ans="";
	    int s[26]={0};
	    int t[26]={0};
	    for(int i=0;i<str.length();i++){
	        if(str[i]>=65&&str[i]<=90){
	             if(t[str[i]-'A']==0)
	            ans+=str[i];
	            t[str[i]-'A']++;
	        }
	        else{
	        if(s[str[i]-'a']==0)
	        ans+=str[i];
	        s[str[i]-'a']++;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends