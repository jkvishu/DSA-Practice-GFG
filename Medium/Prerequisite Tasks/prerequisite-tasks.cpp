//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int V,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    // Striver OP
	    // 😏✅💯
	    vector<int>adj[V];
	    for(auto x:prerequisites){
	        adj[x.first].push_back(x.second);
	    }
	    vector<int>indg(V,0);
	    for(int i=0;i<V;i++){
	        for(auto x:adj[i]){
	            indg[x]++;
	        }
	    }
	    queue<int>q;
	    int c=0;
	    for(int i=0;i<V;i++){
	        if(indg[i]==0)
	        q.push(i);
	    }
	    while(!q.empty()){
	        auto it=q.front();
	        q.pop();
	        c++;
	        for(auto x:adj[it]){
	            indg[x]--;
	            if(indg[x]==0)
	            q.push(x);
	        }
	    }
	    if(c==V)
	    return true;
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends