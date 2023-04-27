//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        // ✅💯🤝😏
        vector<int>ans;
        vector<int>coins({1,2,5,10,20,50,100,200,500,2000});
        int i=9;
        while(N>0&&i>=0){
            if(coins[i]<=N){
                N=N-coins[i];
                ans.push_back(coins[i]);
                continue;
            }
            i--;
        }
        if(N==0)
        return ans;
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
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends