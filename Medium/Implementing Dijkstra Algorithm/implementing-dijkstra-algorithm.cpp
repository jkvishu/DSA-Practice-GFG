//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    /*{
        // Code here
        // Naive approach
        // ✅💯🤝👀
        // Time taken 0.09 sec
       vector<bool> mset(V,false);
        vector<int> dist(V,INT_MAX);
        vector<int> res(V,0);
        dist[S]=0;
        for(int c=0;c<V;c++){
            int u=-1;
            for(int i=0;i<V;i++){
                if(mset[i]==false && (u==-1 || dist[u]>dist[i])){
                    u=i;
                    
                }
            }
            mset[u]=true;
            res[u]=dist[u];
            for(auto a:adj[u]){
                if(mset[a[0]]==false && dist[a[0]]>a[1]+dist[u]){
                    dist[a[0]]=a[1]+dist[u];
                }
            }
        }
        return res;
    }*/
    {
        //More optimized approach
        set<pair<int,int>>s;
        vector<int>dist(V,1e9);
        s.insert({0,S});
        dist[S]=0;
        
        while(!s.empty()){
            auto ptr=*(s.begin());
            int node=ptr.second;
            int dis=ptr.first;
            s.erase(ptr);
            for(auto it:adj[node]){
                int child=it[0];
                int wt=it[1];
                
                if(dis+wt<dist[child]){
                    dist[child]=dis+wt;
                    s.insert({dist[child],child});
                }
            }
        }
        return dist;
    }
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends