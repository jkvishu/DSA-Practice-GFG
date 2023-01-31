//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        //✅💯
        unordered_map<long long,long long> m;
        int i,k=0;
        for(i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(m[arr[i]]==1)
            {
                return arr[i];
            }
        }
        return 0;
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
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

// } Driver Code Ends