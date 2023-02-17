//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool check(int a[],int b[]){
        int f=0;
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                f=1;
                break;
            }
        }
        if(f==0)
        return 1;
        return 0;
    }
	int search(string pat, string txt) {
	    //❌🤝GFG-C understood
	    int a[26]={0},b[26]={0},c=0;
	    for(int i=0;i<pat.length();i++){
	        a[pat[i]-'a']++;
	        b[txt[i]-'a']++;
	    }
	    if(check(a,b))
	    c++;
	    for(int i=pat.length();i<txt.length();i++){
	        b[txt[i-pat.length()]-'a']--;
	        b[txt[i]-'a']++;
	        if(check(a,b))
	        c++;
	    }
	    return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends