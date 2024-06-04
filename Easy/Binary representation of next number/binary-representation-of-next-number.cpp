//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string fltr(string s){
        int i=0;
        string k="";
        for(;i<s.length();i++){
            if(s[i]=='1')
            break;
        }
        for(;i<s.length();i++){
            k+=s[i];
        }
        return k;
    }
    string binaryNextNumber(string s) {
        // code here.
        // POTD
        // ✅😏💯
        s=fltr(s);
        int f=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
            f=1;
            break;
            }
        }
        if(f==0){
            string ans="1";
            for(int i=0;i<s.length();i++){
                ans+='0';
            }
            return ans;
        }
        else{
            int i=s.length()-1;
            if(s[i]==0){
            s[i]='1';
            return s;
            }
            else{
               while(i>=0&&s[i]!='0'){
                   s[i]='0';
                   i--;
               } 
               s[i]='1';
               return s;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends