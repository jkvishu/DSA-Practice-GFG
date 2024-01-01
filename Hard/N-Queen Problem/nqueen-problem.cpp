//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
/*
    bool ok(vector< vector<string> >&k,int row,int col,int n){
    int trow=row;
    int tcol=col;
    while(row>=0&&col>=0){
        if(k[row][col]=="Q")
        return false;
        row--;
        col--;
    }
    row=trow;
    col=tcol;
    while(col>=0){
        if(k[row][col]=="Q")
        return false;
        col--;
    }
    row=trow;
    col=tcol;
    while(row<n&&col>=0){
        if(k[row][col]=="Q")
        return false;
        row++;
        col--;
    }
    return true;
}

void find(vector< vector<int> >&ans, int n, int i,vector< vector<string> >&k,vector<int>&temp)
{
    if(i==n){
        ans.push_back(temp);
        return;
    }
    for(int j=0;j<n;j++){
        if(ok(k,j,i,n)){
            temp.push_back(j+1);
            k[j][i]="Q";
            find(ans,n,i+1,k,temp);
            temp.pop_back();
            k[j][i]=".";
        }
    }
}
    vector<vector<int>> nQueen(int n) {
        // code here
        // ✅🤝💯
        // Striver op
    vector<string>v;
    for(int i=0;i<n;i++){
        v.push_back(".");
    }
    vector< vector<int> >ans;
    vector<int>temp;
    vector< vector<string> >k;
    for(int i=0;i<n;i++){
        k.push_back(v);
    }
    find(ans,n,0,k,temp);
    return ans;
    }
    */
    
    void find(vector< vector<int> >&ans, int n, int i,vector< vector<string> >&k,vector<int>&temp,vector<bool>&lud,vector<bool>&ld,vector<bool>&ldd)
{
    if(i==n){
        ans.push_back(temp);
        return;
    }
    for(int j=0;j<n;j++){
        if(!(lud[n-1+i-j])&&(!ld[j])&&(!ldd[i+j])){
            temp.push_back(j+1);
            k[j][i]="Q";
            lud[n-1+i-j]=1;
            ld[j]=1;
            ldd[i+j]=1;
            find(ans,n,i+1,k,temp,lud,ld,ldd);
            temp.pop_back();
            k[j][i]=".";
            lud[n-1+i-j]=0;
            ld[j]=0;
            ldd[i+j]=0;
        }
    }
}
     vector<vector<int>> nQueen(int n) {
    //Most optimized solution
    // ✅🤝💯
    // Striver op
    vector<string>v;
    for(int i=0;i<n;i++){
        v.push_back(".");
    }
    vector< vector<int> >ans;
    vector<int>temp;
    vector< vector<string> >k;
    for(int i=0;i<n;i++){
        k.push_back(v);
    }
    vector<bool>lud(n,0),ld(n,0),ldd(n,0);
    find(ans,n,0,k,temp,lud,ld,ldd);
    return ans;
     }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends