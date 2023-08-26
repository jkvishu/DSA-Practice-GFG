//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    // POTD
    //✅😏💯
    int j=0,ans=-1,a[26]={0},c=0;
    for(int i=0;i<s.length();i++){
        if(a[s[i]-'a']==0)
        c++;
        a[s[i]-'a']++;
        if(c==k)
        ans=max(ans,i-j+1);
        if(c>k){
            while(c>k){
                a[s[j]-'a']--;
                if(a[s[j]-'a']==0)
                c--;
                j++;
            }
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
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends