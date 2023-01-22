//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n, int fee) {
        // Code here
        //This question is a little variation of Cool down Stock buy and sell problem
        //So it was easy for me to solve it in O(1) Space 
        //Cpypcpcpt
        long long s0=INT_MIN,s1=0; 
        for(long long p:prices) {
            long long int tmp1=s0;
            s0=max(s0,s1-p);
            s1=max(s1,tmp1+p-fee);
        }
        return s1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        int fee; cin>>fee;
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n, fee)<<"\n";
    }
    return 0;
}
// } Driver Code Ends