//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int>v;
        if(n==1)
        {
            if(arr[0]==s)
            {
            v.push_back(1);
            v.push_back(1);
            return v;
            }
            else
            {
                v.push_back(-1);
                return v;
            }
        }
        if(s==0)
        {
            int k=0;
            while(k<n)
            {
                if(arr[k]==0)
                {
                    v.push_back(k+1);
                    v.push_back(k+1);
                    return v;
                }
                else
                {
                    v.push_back(-1);
                    return v;
                }
            }
        }
        int i=0,j=0;
        long long int sum=0;
        while(j<n)
        {
            sum+=arr[j];
            if(sum>s)
            {
                while(i<n&&sum>s)
                {
                    sum-=arr[i];
                    i++;
                }
                if(sum==s)
                {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
                }
            }
            else if(sum==s)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            j++;
        }
        v.push_back(-1);
        return v;
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends