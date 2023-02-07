//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
   /*static bool comp(int a,int b)
   {
       int ia = 0;
       int ib = 0;
       while(a>0)
       {
           ia = ia + a%2;
           a = a/2;
       }
       while(b>0)
       {
           ib = ib + b%2;
           b = b/2;
       }
       return ia > ib;
   }
   void sortBySetBitCount(int arr[], int n)
   {
       // Your code goes here
       //❌
       stable_sort(arr,arr+n,comp);
   }*/
   void sortBySetBitCount(int arr[], int n)
   {
       multimap<int,int,greater<int>>m;
        for(int i=0;i<n;i++){
           int c= __builtin_popcount(arr[i]);
           m.insert({c,arr[i]});
        }
        
        int i=0;
        for(auto it:m){
            arr[i]=it.second;
            i++;
        }
   }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends