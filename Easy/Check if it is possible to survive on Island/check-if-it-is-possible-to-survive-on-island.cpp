//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
          int totalFoodNeeded = S * M;
        int noOfSundays = S / 7;
        int noOfdaysCanByFood = S - noOfSundays;
        int totalMaxFoodBought = noOfdaysCanByFood * N;
        
        if (totalMaxFoodBought < totalFoodNeeded) return -1;
        
        return ceil(1.00 * totalFoodNeeded / N);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends