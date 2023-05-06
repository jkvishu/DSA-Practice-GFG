//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends



class Solution
{
    public:
    //Function to return maximum sum subarray by removing at most one element.
    int maxSumSubarray(int arr[], int n)
    {
        //Your code here
        // 😏✅💯
        int left[n],right[n];
        
        right[n-1] = arr[n-1];
        left[0] = arr[0];
        
        int ans = left[0];
        
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1]+arr[i],arr[i]);
             ans = max(ans,left[i]);
            
            right[n-1-i] = max(right[n-i]+arr[n-1-i],arr[n-1-i]);
        }
        
        ans = max(ans,right[1]);
        
        for(int i=1;i<n-1;i++){
            ans = max(ans,left[i-1]+right[i+1]);
        }
        ans = max(ans,left[n-2]);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	
	//taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking total elements
		int n;
		cin>>n;
		int a[n];
		
		//inserting elements in the array
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		
		//calling method maxSumSubarray()
		Solution obj;
		cout<<obj.maxSumSubarray(a,n)<<endl;
	}
}


// } Driver Code Ends