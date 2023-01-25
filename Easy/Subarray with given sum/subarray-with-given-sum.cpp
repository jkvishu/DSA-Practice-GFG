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
        //Done in first attempt using sliding window technique
        if(s==0)
        return {-1};
        long long int sum=0,i,j=0;
        for(i=0;i<n;i++){
            sum+=arr[i];
            if(sum==s){
                return {j+1,i+1};
            }
            else if(sum>s){
                while(j<=i&&sum>s){
                    sum-=arr[j];
                    j++;
                }
                if(sum==s)
                return {j+1,i+1};
            }
        }
        return {-1};
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
