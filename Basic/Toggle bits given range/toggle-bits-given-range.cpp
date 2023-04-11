//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        // code here
        // TO much brute force approach
        // ✅🙄💯
        string st="";
        while(N){
            int x=N&1;
            if(x==0)
            st.push_back('0');
            else
            st.push_back('1');
            N=N>>1;
        }
        for(int i=L-1;i<=R-1;i++){
            if(st[i]=='0')
            st[i]='1';
            else
            st[i]='0';
        }
        int x=1,ans=0;
        for(int i=0;i<st.length();i++){
            int k=st[i]-'0';
            ans+=x*k;
            x=x*2;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.toggleBits(N,L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends