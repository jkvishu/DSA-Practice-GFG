//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) 
    {
        //code here
        //✅💯😏
	//POTD 
        //Same time complexity 1.29 sec in both the solution
        int rw=0;
        int c=0;
        int j=N-1;
        for(int i=0;i<N;i++){
            while(j<N&&mat[i][j]==0){
                j++;
            }
            while(j<N&&j>=0&&mat[i][j]==1){
                j--;
            }
            if(j>=N){
                j--;
                continue;
            }
            else if(j<0){
                return {i,N};
            }
            else{
            if(N-(j+1)>c){
                c=N-(j+1);
                rw=i;
            }
            }
        }
        return {rw,c};
    }
    /*{
        //✅🤝💯
        int i=0,c=0,ans=0,j=N-1;
        while(i<N&&j>=0){
            if(mat[i][j]==1){
                j--;
                c++;
                ans=i;
            }
            else
            i++;
        }
        return {ans,c};
    }*/
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
