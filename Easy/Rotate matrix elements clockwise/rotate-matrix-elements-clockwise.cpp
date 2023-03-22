//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> mat) {
        // code here
        // ❌🤝©
        int top = 0;
        int left = 0;
        int down = M - 1;
        int right = N - 1;
        while(top <= down && left <= right){
            if(top == down || left == right){
                break;
            }
            int previous = mat[top + 1][left];
            for(int i = left; i <= right; i++){
                int curr = mat[top][i];
                mat[top][i] = previous;
                previous = curr;
            }
            top++;
            for(int i = top; i <= down; i++){
                int curr = mat[i][right];
                mat[i][right] = previous;
                previous = curr;
            }
            right--;
            if(top < down+1){
                for(int i = right; i >= left; i--){
                    int curr = mat[down][i];
                    mat[down][i] = previous;
                    previous = curr;
                }
                down--;
            }
            if(left < right+1){
                for(int i = down; i >= top; i--){
                    int curr = mat[i][left];
                    mat[i][left] = previous;
                    previous = curr;
                }
                left++;
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends