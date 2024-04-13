//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        if(x==0)
        return 0;
        string st="";
        long long hp=1,ans=0;
        int i=0;
        while(x){
            if((x&1)!=0){
                st.push_back('1');
            }
            else{
                st.push_back('0');
            }
            x=x>>1;
            i++;
        }
        while(i<32){
            st.push_back('0');
            i++;
        }
        for(i=st.size()-1;i>=0;i--){
            if(st[i]=='1'){
                ans+=hp;
            }
            hp=(hp*2);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends