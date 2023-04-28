//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        // Code here
        // POTD:-> ©❌🤝👀
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='W'){
                    pq.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        int dis=0;
        vector<vector<int>>ans(n,vector<int>(m,0));
        int rrow[4]={-1,1,0,0};
        int ccol[4]={0,0,-1,1};
        while(!pq.empty()){
            int s=pq.size();
            while(s--){
                int row=pq.front().first;
                int col=pq.front().second;
                pq.pop();
                if(c[row][col]=='H')
                ans[row][col]=dis;
                for(int i=0;i<4;i++){
                    int nrow=row+rrow[i];
                    int ncol=col+ccol[i];
                    if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&c[nrow][ncol]!='N'){
                        vis[nrow][ncol]=1;
                        pq.push({nrow,ncol});
                    }
                }
            }
            dis++;
        }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(c[i][j]=='N'||c[i][j]=='W'||c[i][j]=='.'){
                        ans[i][j]=0;
                    }
                    if(c[i][j]=='H'){
                        if(ans[i][j]==0)
                        ans[i][j]=-1;
                        else
                        ans[i][j]*=2;
                    }
                }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> c(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> res=ob.chefAndWells(n,m,c);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
// } Driver Code Ends