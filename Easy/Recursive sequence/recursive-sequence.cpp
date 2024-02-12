//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        // POTD
        // ✅😏💯
        long long int mod=1e9+7;
        if(n==1)
        return 1;
        if(n==2)
        return 7;
        long long int a=1,b=1,i=0;
        long long int ans=0;
        while(i<n){
            long long int temp=b;
            long long int k=1;
            while(temp){
                k=(k*a)%mod;
                a=(a+1)%mod;
                temp--;
            }
            ans=(ans+k)%mod;
            b++;
            i++;
        }
        return (ans%mod);
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
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends