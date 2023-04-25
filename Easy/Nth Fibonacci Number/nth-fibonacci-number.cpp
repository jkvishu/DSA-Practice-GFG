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
        // ✅💯🤝👀 
        // With dynamic programing.
        // Tabulation method.
        long long int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%1000000007;
        }
        return dp[n];
    }
    /*{
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
        // Memoization method.
        long long m[n+1];
        for(int i=0;i<n+1;i++){
            m[i]=-1;
        }
        return find(m,n);
    }*/
    /*
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
    */
    /*
    //Damn.. easy
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
    */
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
