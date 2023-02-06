//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
         // Code here
         // ❌🤝🤝👀
         sort(arr.begin(),arr.end());
         vector<vector<int>>ans;
         ans.push_back(arr[0]);
         int i=0,k=1;
         while(k<arr.size()){
             if(ans[i][1]>=arr[k][0]){
                 ans[i][1]=max(ans[i][1],arr[k][1]);
             }
             else{
                 ans.push_back(arr[k]);
                 i++;
             }
             k++;
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
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends