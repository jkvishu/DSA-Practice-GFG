//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long countBits(long long N) {
        // code here
        // POTD this question all ready exsist on GFG
        // ✅🤝👀©
        if(N == 0){
            return 0;
        }
        long long int x = log2(N);
        return (1 << (x - 1))*x + (N - (1 << x) + 1) + countBits(N - (1 << x));
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends