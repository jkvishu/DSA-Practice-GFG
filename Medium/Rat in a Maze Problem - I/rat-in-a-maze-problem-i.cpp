//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isvalid(char c,int i,int j,vector< vector<bool> >&vis,int n,vector< vector<int> >&rat){
    if(c=='D'){
        if(i+1<n&&vis[i+1][j]==0&&rat[i+1][j]==1)
        return true;
        else
        return false;
    }
    else if(c=='L'){
        if(j-1>=0&&vis[i][j-1]==0&&rat[i][j-1]==1)
        return true;
        else
        return false;
    }
    else if(c=='R'){
        if(j+1<n&&vis[i][j+1]==0&&rat[i][j+1]==1)
        return true;
        else
        return false;
    }
    else{
        if(i-1>=0&&vis[i-1][j]==0&&rat[i-1][j]==1)
        return true;
        else
        return false;
    }
}
    void find(vector< vector<int> >&rat,int n,vector<string>&ans,string &st,int i,int j,vector< vector<bool> >&vis,string &temp){
    if(i==n-1&&j==n-1){
        ans.push_back(st);
        return;
    }
    for(int k=0;k<4;k++){
        if(isvalid(temp[k],i,j,vis,n,rat)){
            st.push_back(temp[k]);
            vis[i][j]=1;
            if(k==0)
            i=i+1;
            else if(k==1)
            j=j-1;
            else if(k==2)
            j=j+1;
            else
            i=i-1;
            find(rat,n,ans,st,i,j,vis,temp);
            st.pop_back();
            if(k==0)
            i=i-1;
            else if(k==1)
            j=j+1;
            else if(k==2)
            j=j-1;
            else
            i=i+1;
            vis[i][j]=0;
        }
    }
}
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        // Vishu Op
        // ✅😏😎💯
        // Done in first attempt
        vector<string>ans;
        vector< vector<bool> >vis;
        vector<bool>pp;
        string st="",temp="DLRU";
        if(m[0][1]!=1&&m[1][0]!=1||m[0][0]==0)
        return ans;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pp.push_back(0);
        }
        vis.push_back(pp);
        pp.clear();
        }
        find(m,n,ans,st,0,0,vis,temp);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends