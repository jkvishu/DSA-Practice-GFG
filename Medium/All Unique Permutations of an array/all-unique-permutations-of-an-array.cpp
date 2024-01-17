//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void find(vector<vector<int>>&ans,vector<int> &arr,int n,int i){
        if(i==n){
            ans.push_back(arr);
            return;
        }
        for(int j=i;j<n;j++){
            swap(arr[i],arr[j]);
            find(ans,arr,n,i+1);
            swap(arr[i],arr[j]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        // POTD
        // ✅💯😏
        vector<vector<int>>ans;
        find(ans,arr,n,0);
        sort(ans.begin(),ans.end());
        vector<vector<int>>fans;
        fans.push_back(ans[0]);
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1])
            continue;
            fans.push_back(ans[i]);
        }
        return fans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends