//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        //❌©👀 because dp was there
        int n = S.length();
        
        string res1 = "";
        string res2 = "";
        
        if(n <= 1){
            res1 += S[0];
            return res1;
        }
        
        int len = 1;
        int left = 0, right = 0;
        
        for(int i = 0; i < n-1; ++i){
            // even
            int s = i, e = i+1;
            
            while(s >= 0 and e < n && S[s] == S[e]){
                if(e - s + 1 > len){
                    len = e - s + 1;
                    left = s;
                    right = e;
                }
                s--, e++;
            }
        }
        
        for(int i = left; i <= right; ++i){
            res1 += S[i];
        }
        
        for(int i = 1; i < n; ++i){
             // odd
            int s = i-1, e = i+1;
            while(s >= 0 and e < n && S[s] == S[e]){
                if(e - s + 1 > len){
                    len = e - s + 1;
                    left = s;
                    right = e;
                }
                s--, e++;
            }
        }
        
        for(int i = left; i <= right; ++i){
            res2 += S[i];
        }
        
        if(res1.size() > res2.size()) return res1;
        else return res2;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends