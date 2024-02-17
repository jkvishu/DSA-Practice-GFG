//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        // POTD 17/02/2024
        // ✅😏💯
        for(int i=n-1;i>0;i--){
            if(i%2==0){
                int x=(i/2)-1;
                if(arr[x]<arr[i])
                return 0;
            }
            else{
                int x=(i/2);
                if(arr[x]<arr[i])
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends