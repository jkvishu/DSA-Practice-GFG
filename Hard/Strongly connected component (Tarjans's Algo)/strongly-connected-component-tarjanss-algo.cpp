//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
	public:
    //Function to return a list of lists of integers denoting the members 
    //of strongly connected components in the given graph.
     vector<vector<int> >ans;
   void DFS(int u,vector<int>& disc,vector<int>& low,stack<int>& mystack,vector<bool>& presentInStack,vector<int> adj[])
   {
    static int time = 0;
    disc[u] = low[u] = time;
    time+=1;
    mystack.push(u);
    presentInStack[u] = true;
   
    for(int v: adj[u])
    {
     if(disc[v]==-1) 
     {
      DFS(v,disc,low,mystack,presentInStack,adj);
      low[u] = min(low[u],low[v]);
     }
     else if(presentInStack[v]) 
      low[u] = min(low[u],disc[v]);
    }
   
    if(low[u]==disc[u]) 
    {
        vector<int>temp;
     while(mystack.top()!=u)
     {
      temp.push_back(mystack.top());
      presentInStack[mystack.top()] = false;
      mystack.pop();
     }
     temp.push_back(mystack.top());
     presentInStack[mystack.top()] = false;
     mystack.pop();
     sort(temp.begin(),temp.end());
  ans.push_back(temp);
    }
   }
   vector<vector<int>> tarjans(int V, vector<int> adj[])
   {
       //©❌👀🥵
       vector<int> disc(V,-1),low(V,-1);
    vector<bool> presentInStack(V,false); 
    stack<int> mystack;

    for(int i=0;i<V;++i){
     if(disc[i]==-1){
      DFS(i,disc,low,mystack,presentInStack,adj);
     }
    }
    sort(ans.begin(),ans.end());
    return ans;
   }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<vector<int>> ptr = obj.tarjans(V, adj);

        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                if(j==ptr[i].size()-1)
                    cout<<ptr[i][j];
                else
                    cout<<ptr[i][j]<<" ";
            }
            cout<<',';
        }
        cout<<endl;
    }

    return 0;
}


// } Driver Code Ends