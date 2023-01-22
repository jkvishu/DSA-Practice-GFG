//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        //Solved without using DP and Auxillary space.
        //Cypypcpcyt
        long long p1=INT_MIN,p2=0,p3=0; 
        for(long long p:prices) {
            long long int temp1=p1,temp2=p2;
            p1=max(p1,p3-p);
            p2=max(p2,temp1+p);
            p3=max(p3,temp2);
        }
        return p2;
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
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends