//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n)
    {
        // code here
        //Damn.. easy
        //Fastest method exsist on this earth
        //Time complexity is O(logn)
        if(n<=70){
        double phi = (1 + sqrt(5)) / 2;
        long long int ans= (round(pow(phi, n) / sqrt(5)));
        return ans%1000000007;
        }
        if(n==0)
        return 0;
        if(n==1||n==2)
        return 1;
        long long int i=3,a=1,b=2,c=2,m=1000000007;
        while(i!=n){
            c=(a+b)%m;
            a=b;
            b=c;
            i++;
        }
        return c%m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends