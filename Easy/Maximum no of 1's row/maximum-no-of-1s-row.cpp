//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            // ✅💯😏
            int mx=0,ans=INT_MAX;
            for(int i=0;i<N;i++){
                int l=0;
                int h=Mat[i].size()-1;
                while(l<h){
                    int m=(l+h)/2;
                    if(Mat[i][m]==0){
                        l=m+1;
                    }
                    else{
                        h=m;
                    }
                }
                if(l<Mat[i].size()){
                    if(l==Mat[i].size()-1&&Mat[i][l]==0)
                    continue;
                if(Mat[i].size()-h>=mx){
                    if(Mat[i].size()-h>mx){
                    mx=Mat[i].size()-h;
                    ans=i;
                    }
                    else{
                        ans=min(ans,i);
                    }
                }
                }
            }
            if(ans!=INT_MAX)
            return ans;
            return 0;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends