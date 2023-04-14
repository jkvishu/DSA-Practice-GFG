//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<vector<int>> ans;
    bool genratePath(vector<vector<int>>&matrix,int n,int x,int y)
    {
        if (x < 0 || y < 0 || x > n || y > n)
            return false;
        if (x == n && y == n)
        {
            ans[x][y] = 1;
            return true;
        }
        
        ans[x][y] = 1;
        for(int i=1;i<=matrix[x][y];i++)
        {
            if(genratePath(matrix, n, x, y+i))
                return true;
            if(genratePath(matrix, n, x+i, y))
                return true;
        }
        ans[x][y] = 0;
        return false;
        
    }
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   // ©❌👀
	   int size = matrix.size();
	   for(int i=0;i<size;i++)
	   {
	       vector<int> row (size,0);
	       ans.push_back(row);
	   }
	   if(!genratePath(matrix,size-1,0,0)){
	        ans.clear();
	        vector<int> row (1,-1);
	        ans.push_back(row);
	        return ans;
	   }
	   return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends