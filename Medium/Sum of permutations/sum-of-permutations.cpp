//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


long long getSum(int [],int n);
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<getSum(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this method */
int m=1000000007;

long long cal(int a[],int n){

    long long finalNumber = 0;

    for (int i = 0; i < n; i++) {

    int num = a[i];

    if (num != 0) {

        while (num > 0) {

            finalNumber *= 10;

            num /= 10;

        }

        finalNumber += a[i];

      } 

    else {

        finalNumber *= 10;

      }

    }

    return finalNumber;

}

void solve(int j,int A[],int n,long long& ans){

    if(j==n){

        ans+=cal(A,n)%m;

        return;

    }

    for(int i=j;i<n;i++){

        swap(A[j],A[i]);

        solve(j+1,A,n,ans);

        swap(A[j],A[i]);

    }

}

long long getSum(int A[],int n)

{

    //Your code here
    // ©💯👀
    long long ans=0;

    solve(0,A,n,ans);

    return ans%m;

}