//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
  //Done in first attempt without using extra space
  long long int r=0,l=0;
  for(int i=0;i<n;i++){
      r+=A[i];
  }
  for(int i=0;i<n;i++){
      if(l==r-(l+A[i]))
      return i;
      l+=A[i];
  }
  return -1;
  
}