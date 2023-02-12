//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        //✅🤝😏💯Similar question to as of subarray with given sum
        unordered_map<int,int>m;
        int ans=0,psum=0;
        for(int i=0;i<n;i++){
            psum+=arr[i];
            if(psum==sum)
            ans++;
            if(m.find(psum-sum)!=m.end())
            ans+=m[psum-sum];
            m[psum]++;
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
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends