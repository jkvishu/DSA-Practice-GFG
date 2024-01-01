//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
   bool isvalid(int node, int currCol, bool graph[101][101], int m, int n
            ,int color[]) {
        for(int i=0; i<n; i++) {
            if(i!=node && graph[i][node]==true && color[i]==currCol) {
                return false;
            }
        }
        return true;
    }
    bool find(bool graph[101][101], int m, int n,int i,int col[]){
        if(i==n){
            return true;
        }
        for(int j=1;j<=m;j++){
            if(isvalid(i,j,graph,m,n,col)){
                col[i]=j;
                if(find(graph,m,n,i+1,col))
                return true;
                col[i]=0;
            }
        }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        // ✅🤝😏💯
        // Striver op
        int col[n]={0};
        if(find(graph,m,n,0,col))
        return true;
        else
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends