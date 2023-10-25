//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        // POTD
        vector<vector<int>> arr(N, vector<int>(W + 1, 0));
        
        for(int i=0;i<N;i++){
            for(int j=1;j<=W;j++) {
                int pick = 0, notPick = 0;
                if(wt[i]<=j) {
                    pick  = val[i] + arr[i][j-wt[i]];
                }
                if(i>0) notPick = arr[i-1][j];

                arr[i][j] = max(pick,notPick);
            }
        }
        return arr[N-1][W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends