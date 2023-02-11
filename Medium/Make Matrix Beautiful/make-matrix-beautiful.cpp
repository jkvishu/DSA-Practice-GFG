//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here
        // 🤝❌👀
        int ans=0,mx=INT_MIN,mn=INT_MIN;
        vector<int>v;
        for(int i=0;i<n;i++){
            int sum=0,dum=0;
            for(int j=0;j<n;j++){
                sum+=matrix[j][i];
                dum+=matrix[i][j];
            }
            v.push_back(dum);
            mx=max(mx,sum);
            mn=max(mn,dum);
        }
        mx=max(mx,mn);
        for(int i=0;i<v.size();i++){
            ans+=(mx-v[i]);
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends