//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    //WTF why my code is not working lode ka bal ha ye
	    /*int count=0;
	    int m=pat.size(),n=txt.size();
	    vector<int>a(26,0),b(26,0);
	    for(int i=0;i<m;i++){
	        a[pat[i]-'a']++;
	        b[txt[i]-'a']++;
	    }
	    if(a==b)
	    c++;
	    for(int i=m;i<n;i++)
	    {
	        b[txt[i-m]-'a']--;
	        b[txt[i]-'a']++;
	        if(a==b);
	        c++;
	    }
	    return c;*/
	     int count=0;

     int m=pat.size(),n=txt.size();

     vector<int> v1(26,0),v2(26,0);

     for(int i=0;i<m;i++)

     {

         v1[pat[i]-'a']++;

         v2[txt[i]-'a']++;

     }

     if(v1==v2) count++;

     for(int i=m;i<n;i++)

     {

         v2[txt[i-m]-'a']--;

         v2[txt[i]-'a']++;

         if(v1==v2) count++;

     }

     return count;
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