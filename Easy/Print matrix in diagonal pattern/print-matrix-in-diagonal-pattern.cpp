//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         //POTD
         //✅😏💯
         vector<int>ans;
         int n=mat.size();
         int m=n;
         int i=0,j=1;
          if(n==1)
         return {mat[0][0]};
         ans.push_back(mat[0][0]);
         while(!(ans.size()==(n*n))){
             while(i<n&&j>=0){
                 ans.push_back(mat[i][j]);
                 i++;
                 j--;
             }
             if(i>=n)
             {
                 i--;
                 j+=2;
             }
             else if(j<0){
                 j++;
             }
             while(i>=0&&j<m){
                 ans.push_back(mat[i][j]);
                 i--;
                 j++;
             }
             if(j>=m){
                 j--;
                 i+=2;
             }
             else if(i<0){
                 i++;
             }
         }
         return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends