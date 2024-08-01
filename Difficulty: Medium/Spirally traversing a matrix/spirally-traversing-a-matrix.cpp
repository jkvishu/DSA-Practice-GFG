//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        //✅💯😏
        // My method or wa to solve the problem
        // IF matrix mutation is allowed
        // POTD
        int c=matrix[0].size();
        int r=matrix.size();
        int i=0,j=0,k=0;
       vector<int> v;
       while(1)
       {
           while(j<c&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               j++;
           }
           j--;
           i++;
           while(i<r&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               i++;
           }
           i--;
           j--;
           while(j>=0&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               j--;
           }
           j++;
           i--;
           while(i>=0&&matrix[i][j]!=-1)
           {
               k=1;
               v.push_back(matrix[i][j]);
               matrix[i][j]=-1;
               i--;
           }
           i++;
           j++;
           if(k==0)
           {
               break;
           }
           k=0;
       }
       return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends