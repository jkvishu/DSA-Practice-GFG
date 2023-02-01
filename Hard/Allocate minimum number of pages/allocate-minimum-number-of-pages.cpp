//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool issol(int A[],int m,int M,int N){
        int res=0,k=1;
        for(int i=0;i<N;i++){
            if(res+A[i]>m){
                k++;
                res=A[i];
            }
            else
            res+=A[i];
        }
        return (k<=M);
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        //❌🤝GFG-c;
        if(M>N)
        return -1;
        long long int sum=0;
        int mx=0,ans=0;
        int flag=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            mx=max(mx,A[i]);
        }
        if(M==N)
        return mx;
        if(M==1)
        return sum;
        int l=mx,h=sum;
        while(l<=h){
            int m=(l+h)/2;
            if(issol(A,m,M,N)){
                ans=m;
                h=m-1;
                flag=1;
            }
            else
            l=m+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends