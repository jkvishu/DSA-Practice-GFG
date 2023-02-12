//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	//❌👀🤝
    	unordered_map<int,int>s;
    	int c=0,psum=0;
    	for(int i=0;i<n;i++){
    	    psum+=arr[i];
    	    if(psum==sum)
    	    c++;
    	    if(s.find(psum-sum)!=s.end())
    	    c+=s[psum-sum];
    	    s[psum]++;
    	}
    	return c;
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
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}
// } Driver Code Ends