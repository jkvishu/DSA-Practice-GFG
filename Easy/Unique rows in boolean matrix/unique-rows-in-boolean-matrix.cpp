//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);


// } Driver Code Ends
class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        //POTD ✅💯😏
        unordered_set<string> sett;
        vector<vector<int>> ans;
        for(int i=0; i<row; i++){
            string temp;
            for(int j=0; j<col; j++){
                temp.push_back((char)(M[i][j]+48));
            }
            if(sett.find(temp)==sett.end()){
                vector<int> tmp(M[i], M[i]+col);
                ans.push_back(tmp);
                sett.insert(temp);
            }
        }
        return ans;
    }
    /*
    //✅💯😏
set<vector<int>>s;
vector<vector<int>>ans;
vector<int>temp;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        temp.push_back(M[i][j]);
    }
    s.insert(temp);
    temp.clear();
}
temp.clear();
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        temp.push_back(M[i][j]);
    }
    if(s.find(temp)!=s.end())
    {
        auto it=s.find(temp);
        ans.push_back(*it);
        s.erase(*it);
    }
    temp.clear();
}
return ans;
    */
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	Solution ob;
    	vector<vector<int>> vec = ob.uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends
