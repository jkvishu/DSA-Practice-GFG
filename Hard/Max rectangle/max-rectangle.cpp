//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int find(vector<int>&v){
        stack<int>s;
        int ans=0;
        int cal=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            while(!s.empty()&&v[s.top()]>=v[i]){
                int pp=s.top();
                s.pop();
                cal=v[pp]*(s.empty()?i:(i-s.top()-1));
                ans=max(ans,cal);
            }
            s.push(i);
        }
        while(!s.empty()){
            int pp=s.top();
            s.pop();
            cal=v[pp]*(s.empty()?n:(n-s.top()-1));
            ans=max(ans,cal);
        }
        return ans;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        // ✅🤝🤝👀🙄
        vector<int>v(m,0);
        int ans=find(v);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==1)
                v[j]++;
                else
                v[j]=0;
            }
            ans=max(ans,find(v));
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