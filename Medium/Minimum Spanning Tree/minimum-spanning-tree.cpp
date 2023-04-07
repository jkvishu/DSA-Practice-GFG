//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class disjoint_set {
  vector<int> rank, parent, size;
  
  public:
    disjoint_set(int n) {
        rank.resize(n, 0); // for 0 based  
        size.resize(n, 1);
        for(int i=0;i<n;i++) parent.push_back(i);
    }
    
    int findUPar(int node) { // find ultimate parent
        if(node == parent[node]) return node;
        return parent[node] = findUPar(parent[node]); // path compresion
    }
    
    void union_by_rank(int u, int v) { // conneting nodes ig
        // find ultimate  parent of u and v
        int ult_p_u = findUPar(u); // ultimate parent of u
        int ult_p_v = findUPar(v); // ultimate parent of v
        
        // find rank of ult_p_u & ult_p_v and connect smaller rank to larger rank always
        if(rank[ult_p_u] < rank[ult_p_v]) {
            parent[ult_p_u] = ult_p_v; 
        } 
        else if(rank[ult_p_v] < rank[ult_p_u]) {
            parent[ult_p_v] = ult_p_u; 
        } 
        else { // rank is same 
            parent[ult_p_v] = ult_p_u; 
            rank[ult_p_u]++;
        }
    }
    
    void union_by_size(int u, int v) { // conneting nodes ig
        // find ultimate  parent of u and v
        int ult_p_u = findUPar(u); // ultimate parent of u
        int ult_p_v = findUPar(v); // ultimate parent of v
        
        if(size[ult_p_u] < size[ult_p_v]) {
            parent[ult_p_u] = ult_p_v; 
            size[ult_p_v] += size[ult_p_u];
        } 
        else {
            parent[ult_p_v] = ult_p_u;
            size[ult_p_u] += size[ult_p_v];
        }
    }
};

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // Kruskal's Algorithm (disjoint set)
        // tc = MlogM (for sorting) + M * 4 * alpha (alpha is nearly 1 ig)
        // sc = V
        // ❌©👀
        vector<pair<int, pair<int, int>>> edges;
        
        for(int i=0;i<V;i++) {
            for(auto it : adj[i]) {
                int node = i;
                int child = it[0];
                int wt = it[1];
                edges.push_back({wt, {node, child}}); // it will be stored 2 times but disjoint set will handle it 
            }
        }
        // MlogM
        sort(edges.begin(), edges.end()); // to get all edges weight in sorted order with its pair
        disjoint_set ds(V);
        int sum = 0;
        for(auto it : edges) {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            
            if(ds.findUPar(u) != ds.findUPar(v)) {
                sum += wt;
                ds.union_by_size(u, v); // can also do it with union_by_rank , both have same tc
            }
        }
        return sum;
    }
/*class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        // ✅💯🤝
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int ans=0;
        int vis[V]={0};
        pq.push({0,0});
        while(!pq.empty()){
            int w=pq.top().first;
            int k=pq.top().second;
            pq.pop();
            if(vis[k])
            continue;
            vis[k]=1;
            ans+=w;
            for(auto x:adj[k]){
                if(vis[x[0]]==0)
                pq.push({x[1],x[0]});
            }
        }
        return ans;
    }*/
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends