//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        // POTD
        // ✅😏💯
        int i=0,j=0;
        int f=0;
        while(i<n&&j<m&&i>=0&&j>=0){
            if(matrix[i][j]==0){
                if(f==0)
                j++;
                else if(f==1)
                i++;
                else if(f==2)
                j--;
                else
                i--;
            }
            else{
                f=(f+1)%4;
                matrix[i][j]=0;
                if(f==0)
                j++;
                else if(f==1)
                i++;
                else if(f==2)
                j--;
                else
                i--;
            }
            if(i>=n||j>=m||i<0||j<0){
                if(j<0)
                return {i,++j};
                if(i<0)
                return {++i,j};
                if(j>=m)
                return {i,--j};
                if(i>=n)
                return {--i,j};
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends