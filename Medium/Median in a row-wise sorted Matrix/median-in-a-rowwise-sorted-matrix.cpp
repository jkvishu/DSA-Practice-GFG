//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int find(vector<int>&v,int mid){
    int l=0;
    int h=v.size()-1;
    while(l<=h){
        int m=(l+h)/2;
        if(v[m]<=mid)
        l=m+1;
        else
        h=m-1;
    }
    return l;
}
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here    
        //🤝❌👀GFG-C
        int mn=matrix[0][0],mx=matrix[0][C-1];
        for(int i=1;i<R;i++){
            mn=min(mn,matrix[i][0]);
            mx=max(mx,matrix[i][C-1]);
        }
        int median=(R*C+1)/2;
        while(mn<mx){
            int mid=(mn+mx)/2;
            int middle=0;
            for(int i=0;i<R;i++){
                middle=middle+(upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin());
            }
            if(middle<median)
            mn=mid+1;
            else
            mx=mid;
        }
        return mn;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends