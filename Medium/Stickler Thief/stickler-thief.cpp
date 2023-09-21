//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        //POTD 
        if(n==1)
        return arr[0];
        if(n==2)
        return max(arr[0],arr[1]);
        arr[1]=max(arr[0],arr[1]);
        int mx,s;
        for(int i=2;i<n;i++)
        {
            mx=max(arr[i-1],arr[i]+arr[i-2]);
            arr[i]=mx;
        }
        return arr[n-1];
    }
    /*{
        // Your code here
        vector<int> dp(n);
        int i;
        dp[0] = arr[0];
        dp[1] = max(arr[1], arr[0]);
        
        for(int i = 2; i < n; ++i) {
            dp[i] = max(arr[i] + dp[i-2], dp[i-1]);
        }
        
        return *max_element(dp.begin(), dp.end());
    }*/
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends