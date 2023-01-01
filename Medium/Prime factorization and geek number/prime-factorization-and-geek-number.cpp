//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int geekNumber(int N){
        // code here
        //Done by me on my own
        //Time complexity : 0.02 sec
        int c=0;
        if(N<=1)
        return 1;
        while(N%2==0){
            c++;
            if(c>1){
                return 0;
            }
            N=N/2;
        }
        c=0;
        while(N%3==0){
            c++;
            if(c>1){
                return 0;
            }
            N=N/3;
        }
        c=0;
        for(int i=5;i*i<=N;i=i+6){
            while(N%i==0){
                c++;
                if(c>1){
                    return 0;
                }
                N=N/i;
            }
            c=0;
            while(N%(i+2)==0){
                c++;
                if(c>1){
                    return 0;
                }
                N=N/(i+2);
            }
            c=0;
        }
        return 1;
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
        if(ob.geekNumber(N))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends
