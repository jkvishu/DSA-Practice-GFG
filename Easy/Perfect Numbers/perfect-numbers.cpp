//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    static int isPerfectNumber(long long N) {
        // code here
        //Done 60% and 40%+
        if(N==1)
        return 0;
        long int i=2,sum=0;
        while(i<=sqrt(N)){
            if(N%i==0)
            {
                sum+=i+N/i;
            }
            i++;
        }
        sum++;
        if(sum==N)
        return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends