//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    // ✅💯😏
    int k=1,l=A[0];
    for(int i=2;i<=N;i++){
        k=k^i;
    }
    for(int j=1;j<N-1;j++){
        l=l^A[j];
    }
    return k^l;
}