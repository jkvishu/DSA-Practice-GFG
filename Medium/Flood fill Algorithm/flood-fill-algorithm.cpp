//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int ncol) {
        // Code here 
        // ✅😏💯
        queue<pair<int,int>>pq;
        int dlrow[]={-1,0,+1,0};
        int dlcol[]={0,+1,0,-1};
        int x=image[sr][sc];
        image[sr][sc]=ncol;
        pq.push({sr,sc});
        int n=image.size();
        int m=image[0].size();
        vector<vector<bool>>ck(n,vector<bool>(m,false));
        ck[sr][sc]=true;
        while(!pq.empty()){
            auto it=pq.front();
            pq.pop();
            for(int i=0;i<=3;i++){
                    int nr=dlrow[i]+it.first;
                    int nc=dlcol[i]+it.second;
                    if(nr>=0&&nr<n&&nc>=0&&nc<m&&image[nr][nc]==x&&ck[nr][nc]==false){
                        ck[nr][nc]=true;
                        image[nr][nc]=ncol;
                        pq.push({nr,nc});
                    }
            }
        }
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends