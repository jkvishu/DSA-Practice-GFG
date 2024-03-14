//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        // code here
        // POTD
        // ✅🤝😏💯
        int a1[n][n];
        int b1[n][n];
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(a[i][j]=='X')
                c++;
                else
                c=0;
                a1[i][j]=c;
            }
        }
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(a[j][i]=='X')
                c++;
                else
                c=0;
                b1[j][i]=c;
            }
        }
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=min(a1[i][j],b1[i][j]);
                if(x>mx){
                    while(x>mx){
                        if(a1[i-x+1][j]>=x&&b1[i][j-x+1]>=x){
                        mx=x;
                        break;
                        }
                        else
                        x--;
                    }
                }
            }
        }
        return mx;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        Solution ob;
        cout << ob.largestSubsquare(n, a) << "\n";
    }
}
// } Driver Code Ends