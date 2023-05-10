//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        // POTD 👀©❌
        int cuts=0;
        int leftMax[N]={0};
        int rightMin[N]={0};
        
        leftMax[0]=A[0];
        for(int i=1;i<N;i++)
        {
            leftMax[i]=max(leftMax[i-1],A[i]);
        }
        
        rightMin[N-1]=A[N-1];   
        for(int i=N-2;i>=0;i--) 
         {
            rightMin[i]=min(rightMin[i+1],A[i]);
        }
        
        for(int i=0;i<N-1;i++)
        {
            if(leftMax[i]+rightMin[i+1]>=K){
                cuts++;
            } 
        }
        return cuts;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends