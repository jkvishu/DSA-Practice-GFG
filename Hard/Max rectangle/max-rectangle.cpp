//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:   
    int getMaxArea(vector<int>&arr, int n)
    {
        // Your code here
        // GGF-C
        // ✅🤝👀
        int ans=0;
        int cal=0;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&arr[s.top()]>=arr[i]){
                int tp=s.top();
                s.pop();
                cal=arr[tp]*(s.empty()?i:(i-s.top()-1));
                ans=max(ans,cal);
            }
            s.push(i);
        }
        while(!s.empty()){
            int tp=s.top();
            s.pop();
            cal=arr[tp]*(s.empty()?n:(n-s.top()-1));
            ans=max(ans,cal);
        }
        return ans;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        // Direct Optimal Solution
        // ✅💯😏🤝
        // Striver OP
        int ans=1;
        vector<int>dp(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==1)
                dp[j]++;
                else
                dp[j]=0;
            }
            ans=max(ans,getMaxArea(dp,m));
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends