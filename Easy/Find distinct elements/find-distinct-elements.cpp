//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here
        // ❌🤝😕
        int c=0;
        unordered_map<int,int>m;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(m[M[i][j]]==i)
                m[M[i][j]]++;
            }
        }
        auto it=m.begin();
        while(it!=m.end()){
            if(it->second==N)
            c++;
            ++it;
        }
        return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends