//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    string binToGrey(string B) {
        // code here
        //Done by Vishu Tyagi ⭐️
        //Done after knowing the concept of how to convert the gray code to binary code.
        //Which states that if you want to convert a binary code to gray code than first copy the most significant bit and than start doing xor of each bits with its next bit 
        string st="";
        st=B[0];
        int i,xr;
        for(i=0;i<B.length()-1;i++){
            xr=(B[i]-'0')^(B[i+1]-'0');
            st+=to_string(xr);
        }
        return st;
    }
    
    string greyToBin(string G) {
        // code here
        //If we want to convert a gray code to binary code than first copy the msb bit and than start xoring each bit from msb to lsb with the xor result obtained from the prev xor and initially that xor result will be the msb bit itslef
        string st="";
        st=G[0];
        int prev=G[0]-'0',i,xr;
        for(i=1;i<G.length();i++){
            xr=(G[i]-'0')^prev;
            prev=xr;
            st+=to_string(xr);
        }
        return st;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string B,G;
        
        cin>>B;
        cin>>G;

        Solution ob;
        cout << ob.binToGrey(B) << endl;
        cout << ob.greyToBin(G) << endl;
    }
    return 0;
}
// } Driver Code Ends