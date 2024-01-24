//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
  int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
         // POTD
        // 🤝✅👀©
        vector<int>visited(n,0);
        vector<int>adjList[n];
        for(auto &&it:adj){
            int u = it[0],v = it[1];
            if(u==v) return 0;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        if(cycle(0,adjList,visited,-1)==true) return 0;
        for(int i=0;i<n;i++) if(visited[i]==0) return 0;
        return 1;
    }


    bool cycle(int node,vector<int>adj[],vector<int> &visited, int parent){
        visited[node]=1;
        for(auto it:adj[node]){
            if(!visited[it]){
                if(cycle(it,adj,visited,node)) return true;
            }
            else if(it!=parent) return true;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends