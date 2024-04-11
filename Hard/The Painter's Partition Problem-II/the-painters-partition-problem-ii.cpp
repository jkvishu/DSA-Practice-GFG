//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int A[], int N, int k)
    {
        // code here
        // return minimum time
        long long int start=0;
        long long int end=0;
        long long int ans, mid;
        for(int i=0;i<N;i++){
            start=max(start,(long long) A[i]);
            end+=A[i];
        }
        while(start<=end){
            mid=(start+end)/2;
            long long int page=0;
            long long int count=1;
            for(int j=0;j<N;j++){
                page+=A[j];
                if(page>mid){
                    count++;
                    page=A[j];
                }
            }
            if(count<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
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
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends