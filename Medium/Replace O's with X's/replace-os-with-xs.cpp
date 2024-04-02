//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(vector<vector<char>> &mat,vector<vector<bool>>&vis,int i,int j){
        vis[i][j]=1;
        int row[] = {-1, 0, +1, 0};
        int col[] = {0, +1, 0, -1};
        int n=mat.size();
        int m=mat[0].size();
        for(int k=0;k<4;k++){
            int nr=row[k]+i;
            int nc=col[k]+j;
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&mat[nr][nc]=='O'&&vis[nr][nc]==false){
            vis[nr][nc]=true;
            dfs(mat,vis,nr,nc);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        // ✅😏💯🤝
        // Striver OP
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O'&&vis[i][0]==0){
                dfs(mat,vis,i,0);
            }
        }
        for(int i=0;i<m;i++){
            if(mat[n-1][i]=='O'&&vis[n-1][i]==0){
                dfs(mat,vis,n-1,i);
            }
        }
        for(int i=n-1;i>=0;i--){
            if(mat[i][m-1]=='O'&&vis[i][m-1]==0){
                dfs(mat,vis,i,m-1);
            }
        }
        for(int i=m-1;i>=0;i--){
            if(mat[0][i]=='O'&&vis[0][i]==0){
                dfs(mat,vis,0,i);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O'&&vis[i][j]==0)
                mat[i][j]='X';
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends