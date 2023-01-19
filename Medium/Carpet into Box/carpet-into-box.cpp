//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        //Done in first attempt with my own logic
        long long int q=max(A,B);
        long long int p=min(A,B);
        int c=0;
        while(!(q<=max(C,D))){
            q=q/2;
            if(q<p){
                swap(q,p);
            }
            c++;
        }
        while(!(p<=min(C,D))){
            p=p/2;
            c++;
        }
        return c;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends