//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    //✅👀🤝
	    if(N==0)
	    return A[0];
	    if(A[0]!=A[1])
	    return A[0];
	    if(A[N-1]!=A[N-2])
	    return A[N-1];
	    int l=0,h=N-1;
	    while(l<=h){
	        int m=l+(h-l)/2;
	        if(A[m]!=A[m+1]&&A[m]!=A[m-1])
	        return A[m];
	        else if(((m%2==0)&&A[m]==A[m+1])||((m%2==1)&&A[m]==A[m-1]))
	        l=m+1;
	        else
	        h=m-1;
	    }
	    return -1;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends