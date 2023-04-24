//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int find(long long int m[],long long int n){
        if(m[n]==-1){
            int res;
            if(n==0||n==1)
            res=n;
            else
            res=find(m,n-1)%1000000007+find(m,n-2)%1000000007;
            m[n]=res%1000000007;
        }
        return m[n]%1000000007;
    }
    long long int nthFibonacci(long long int n){
        // code here
        // ✅💯🤝👀 
        // With dynamic programing.
        long long m[n+1];
        for(int i=0;i<n+1;i++){
            m[i]=-1;
        }
        return find(m,n);
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