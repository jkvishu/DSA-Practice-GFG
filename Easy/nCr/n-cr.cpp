//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int mod=1e9+7;
    int binpow(int a,int b){
       int res = 1;
       while(b > 0){
           if(b & 1){
               res = (res*1LL*a)%mod;
           }
           a = (a*1LL*a)%mod;
           b >>= 1;
       }
       return res;
   }
   
   long int ncr(long long n, long long r){
       // complete the function here
       // ✅💯👀😏©👀
       long long fact[n+1];
       long long inv[n+1];
       fact[0] = inv[0] = 1;
       for(int i=1;i<=n;i++){
           fact[i] = (i*fact[i-1])%mod;
       }
       for(int i=1;i<=n;i++){
           inv[i] = binpow(fact[i],mod-2);
       }
       if(r > n)return 0;
       return ((fact[n]*inv[r])%mod*inv[n-r])%mod;
   }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n, r;
        cin >> n >> r;
        Solution ob;
        cout << ob.ncr(n, r) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends