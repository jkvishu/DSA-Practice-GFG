//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        // POTD ✅😏💯
        if(N==1)
        return 1;
        if(N==2||N==4)
        return 2;
        if(N==3)
        return 3;
        if(N==5)
        return 5;
        long long int ans=INT_MIN;
        while(N%2==0){
            ans=2;
            N=N/2;
        }
        while(N%3==0){
            ans=3;
            N=N/3;
        }
        for(int i=5;i*i<=N;i=i+6){
             if(N%i==0){
                 while(N%i==0){
                     N=N/i;
                     if(i>ans)
                     ans=i;
                 }
             }
             if(N%(i+2)==0){
                 while(N%(i+2)==0){
                     N=N/(i+2);
                     if((i+2)>ans)
                     ans=i+2;
                 }
             }
        }
        if(N>3)
        return N;
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends