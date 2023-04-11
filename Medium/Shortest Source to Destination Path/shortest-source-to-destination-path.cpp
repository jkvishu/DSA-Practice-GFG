//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        // STRv OP
        // ✅🤝👀©
        if(A[0][0]==0)
        return -1;
        if(X==0&&Y==0)
        return 0;
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>ans(N,vector<int>(M,1e9));
        ans[0][0]=0;
        q.push({0,{0,0}});
        int xx[]={-1,0,1,0};
        int yy[]={0,1,0,-1};
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int dis=it.first;
            int r=it.second.first;
            int c=it.second.second;
            for(int i=0;i<4;i++){
                int nr=r+xx[i];
                int nc=c+yy[i];
                if(nr>=0&&nr<N&&nc>=0&&nc<M&&A[nr][nc]==1&&dis+1<ans[nr][nc]){
                    ans[nr][nc]=1+dis;
                    if(nr==X&&nc==Y)
                    return ans[nr][nc];
                    q.push({1+dis,{nr,nc}});
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends