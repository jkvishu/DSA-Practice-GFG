//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string minWindow(string str1, string str2) {
        // Write your Code here
        //©💯❌
        int l=-1e9,r=1e9;
        for(int i=0;i<str1.size();i++){
            int k=0,j=i;
            while(k < str2.size() and j < str1.size()){
                if(str1[j] == str2[k]) k++; j++;
            }
            if(k == str2.size()){
                int a = j-1, b = k-1;
                while(b >= 0){
                    if(str1[a] == str2[b]) b--; a--;
                }
                int tl = a+1, tr = j-1;
                if((tr-tl+1) < (r-l+1)) l = tl, r = tr;
            }
        }
        return l == -1e9 ? "" : str1.substr(l,r-l+1);
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string str1, str2;
        cin >> str1 >> str2;

        Solution obj;
        cout << obj.minWindow(str1, str2) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends