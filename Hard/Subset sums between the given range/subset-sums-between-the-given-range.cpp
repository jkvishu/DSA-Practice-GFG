//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    int counter=0;
    void find_answer(int ind,int sum,vector<int>&arr,int n,int l, int r)
    {
        if(ind == n)
        {
            if(sum>=l && sum <=r)
        {
            counter++;
            
        }
        return;
        }
        sum+= arr[ind];
        find_answer(ind+1,sum,arr,n,l,r);
        sum-=arr[ind];
        find_answer(ind+1 ,sum,arr,n,l,r);
    }
    long long int countSubsets(vector<int>&arr, int n, int l, int r)
    {
        //©❌©
        long long int sum =0;
        find_answer(0,sum,arr,n,l,r);
        return counter;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    int l, r;
	    cin >> l >> r;
	    Solution ob;
	    long long int ans = ob.countSubsets(arr, n, l, r);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends