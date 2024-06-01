//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        // POTD
        // ✅😏💯
        int a[26]={0};
        int x=0,y=0;
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(((s[i]-'a')+1)%2==0&&a[s[i]-'a']>0&&a[s[i]-'a']%2==0)
            x++;
            else if(((s[i]-'a')+1)%2!=0&&a[s[i]-'a']>0&&a[s[i]-'a']%2!=0)
            y++;
            a[s[i]-'a']=0;
        }
        if((x+y)%2==0)
        return "EVEN";
        else
        return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends