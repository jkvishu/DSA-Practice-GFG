//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  /*
    char nthCharacter(string s, int r, int n) {
        //code here
        //POTD
        //BRute force
        //✅😏💯
        //TLE
        string st="";
        while(r){
            for(int i=0;i<s.length();i++){
                if(s[i]=='0')
                st+="01";
                else
                st+="10";
            }
            s=st;
            st="";
            r--;
        }
        return s[n];
    }
    */
    char nthCharacter(string s, int r, int n) {
        //code here
        //POTD
        //✅😏💯
        string st="";
        while(r){
            for(int i=0;i<s.length();i++){
                if(s[i]=='0')
                st+="01";
                else
                st+="10";
                if(st.length()>n)
                break;
            }
            s=st;
            st="";
            r--;
        }
        return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends