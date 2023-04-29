//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findNumber(long long N){
        // Code here
        // ✅💯🤝👀
        // POTD:-> 29/04/23
        long long int h[5]={9,1,3,5,7};
        long long int k=1,ans=0;
        while(N){
            ans+=h[N%5]*k;
            if(N%5==0)
            N=N/5-1;
            else
            N=N/5;
            k=k*10;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends