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
        // Your code here
        // Best Optimal solution for this problem finally in 2024
        // 💯✅😏😎
        int cur=arr[0];
        int prv=0;
        for(int i=1;i<n;i++){
            int pick=arr[i];
            if(i>1)
            pick+=prv;
            int ntpick=cur+0;
            prv=cur;
            cur=max(pick,ntpick);
        }
        return cur;
    }
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