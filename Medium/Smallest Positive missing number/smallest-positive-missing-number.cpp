//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        // POTD ✅😏💯
        int mx=INT_MIN;
        unordered_set<int>m;
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
            m.insert(arr[i]);
        }
        for(int i=1;i<=mx;i++){
            if(m.find(i)==m.end())
            return i;
        }
        if(mx<=0)
        return 1;
        return mx+1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends