//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

vector<int>v;
class Solution{
public:
    vector<int> solve(vector<int>&v,int N,int m){
         if(N>0){
            v.push_back(N);
            solve(v,N-5,m);
            if(N<m){
            v.push_back(5+N);
            }
        }
        else{
        v.push_back(N);
        v.push_back(N+5);
        }
        return v;
        
    }
    vector<int> pattern(int N){
        // code here
        //Done on my own in first attempt
        //little creepy
        vector<int>k;
        return solve(k,N,N);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends