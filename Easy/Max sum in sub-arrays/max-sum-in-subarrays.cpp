//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        //Done in first attempt with my own logic
        long long int ans=0,sum;
        int i=0;
        while(i<2){
            ans+=arr[i];
            i++;
        }
        int j=0;
        sum=ans;
        while(i<N){
            sum-=arr[j];
            sum+=arr[i];
            ans=max(ans,sum);
            i++;
            j++;
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends