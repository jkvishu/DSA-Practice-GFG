//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void f(int n,vector<int>&ans){
        vector<bool> temp(n,true);
        for(int i=2;i<=sqrt(n);i++){
            if(temp[i]){
                for(int j=i*i;j<n;j+=i){
                    temp[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(temp[i]){
                ans.push_back(i);
            }
        }
    }
    vector<int> primeDivision(int N){
        // code here
        //©👀©❌
        vector<int> ans;
        f(N,ans);
        for(int a:ans){
            int ind= lower_bound(ans.begin(),ans.end(),N-a)-ans.begin();
            if(ans[ind]==N-a) return {a,N-a};
        }
        return {-1};
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
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends