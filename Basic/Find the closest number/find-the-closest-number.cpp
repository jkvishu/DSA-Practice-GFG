//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        // ✅😏💯
        int ans=INT_MAX,k;
        for(int i=0;i<n;i++){
            if(abs(arr[i]-target)<ans){
                ans=abs(arr[i]-target);
                k=arr[i];
            }
            else if(abs(arr[i]-target)==ans){
                k=max(k,arr[i]);
            }
        }
        return k;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends