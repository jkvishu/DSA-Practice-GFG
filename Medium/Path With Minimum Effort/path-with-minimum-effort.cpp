//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
        // Code here
        // 88 72 75 69 81 91 -> 81.4
        // 71 90 85 87 86 98 -> 89.2
        // Striver OP
        // ✅😏💯
        int n=heights.size();
        int m=heights[0].size();
        int adjrow[]={-1,0,+1,0};
        int adjcol[]={0,+1,0,-1};
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>>dis(n,vector<int>(m,1e9));
        dis[0][0]=0;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            if(it.second.first==n-1&&it.second.second==m-1)
            return it.first;
            for(int i=0;i<4;i++){
                int nr=adjrow[i]+it.second.first;
                int nc=adjcol[i]+it.second.second;
                if(nr>=0&&nr<n&&nc>=0&&nc<m){
                    int dif=abs(heights[nr][nc]-heights[it.second.first][it.second.second]);
                    dif=max(dif,it.first);
                    if(dif<dis[nr][nc])
                    {
                        dis[nr][nc]=dif;
                        pq.push({dif,{nr,nc}});
                    }
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends