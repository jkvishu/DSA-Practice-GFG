//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    void find(vector<int>&a, int n, vector<int> &v, int i, vector< vector<int> > &ans)
{
    ans.push_back(v);
    for (int j = i; j < n; j++)
    {
        if (j != i && a[j] == a[j - 1])
            continue;
        v.push_back(a[j]);
        find(a, n, v, j + 1, ans);
        v.pop_back();
    }
}
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        // ✅🤝💯😉
        sort(nums.begin(),nums.end());
        vector< vector<int> > ans;
        int n=nums.size();
        vector<int>v;
        find(nums,n,v,0,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends