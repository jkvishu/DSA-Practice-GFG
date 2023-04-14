//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void find(vector<string>&ans,string temp,vector<vector<int>> &m,int n,int r,int c){
        if(r>=n||r<0||c>=n||c<0||m[r][c]==0)
        return;
        if(r==n-1&&c==n-1){
            ans.push_back(temp);
            return;
        }
        m[r][c]=0;
        find(ans,temp+'D',m,n,r+1,c);
        find(ans,temp+'U',m,n,r-1,c);
        find(ans,temp+'R',m,n,r,c+1);
        find(ans,temp+'L',m,n,r,c-1);
        m[r][c]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        // ✅🤝©👀
        if(m[0][0]==0)
        return {"-1"};
        vector<string>ans;
        find(ans,"",m,n,0,0);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends