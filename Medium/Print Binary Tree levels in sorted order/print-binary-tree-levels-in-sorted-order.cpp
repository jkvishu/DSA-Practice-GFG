//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        // Your code here
        // ✅💯😏
        int i=1,k=0;
        vector<vector<int>>ans;
        while(k<n){
            vector<int>temp;
            for(int j=0;j<i;j++){
                if(k<n){
                    temp.push_back(arr[k++]);
                }
            }
            if(temp.size()>0){
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
                temp.clear();
            }
            i=i*2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends