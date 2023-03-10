//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	// ✅🤝😏
    	long long int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
    	long long int l1=INT_MAX,l2=INT_MAX;
    	long long int temp;
    	for(int i=0;i<n;i++){
    	    if(arr[i]>m1){
    	        temp=m2;
    	        m2=m1;
    	        m3=temp;
    	        m1=arr[i];
    	    }
    	    else if(arr[i]>m2){
    	        m3=m2;
    	        m2=arr[i];
    	    }
    	    else if(arr[i]>m3){
    	        m3=arr[i];
    	    }
    	    if(arr[i]<l1){
    	        l2=l1;
    	        l1=arr[i];
    	    }
    	    else if(arr[i]<l2){
    	        l2=arr[i];
    	    }
    	}
    	long long sum1=m1*m2*m3;
    	long long sum2=l1*l2*m1;
    	return max(sum1,sum2);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends