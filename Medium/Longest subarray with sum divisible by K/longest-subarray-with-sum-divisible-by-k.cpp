//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    // POTD ✅💯😏
	    unordered_map<int,int>m;
	    m[0]=-1;
	    int ans=0;
	    long long int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        int x=sum%k;
	        if(x<0){
	            x=x+k;
	        }
	        if(m.find(x)!=m.end()){
	            ans=max(ans,i-m[x]);
	        }
	        else{
	            m[x]=i;
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
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends