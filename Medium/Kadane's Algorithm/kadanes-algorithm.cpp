//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        //Simple implementation of Kadane's algorithm.
        // Your code here
        //just checking already done
        long long sum=0,mx_sum=INT_MIN;
        int i;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            mx_sum=max(mx_sum,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return mx_sum;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends
