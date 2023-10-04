//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        // POTD
         // done by me in first attempt.
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int n=str.length(),sum,i;
        char c=str[n-1],d;
        sum=m[c];
        for(i=n-2;i>=0;i--)
        {
            c=str[i];
            d=str[i+1];
            if(m[c]>=m[d])
            {
                sum=sum+(m[c]);
            }
            else
            {
                sum=sum-(m[c]);
            }
        }
        return sum;
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
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends