//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) 
    { 
       // Your code here
       // Ternary search.✅
       int l=0,h=N-1,m1,m2;
       while(l<=h){
           m1=l+(h-l)/2;
           m2=h-(h-l)/2;
           if(arr[m1]==K || arr[m2]==K)
           return 1;
           if(arr[m1]>K){
               h=m1-1;
           }
           else if(arr[m2]<K){
               l=m2+1;
           }
           else{
               l=m1+1;
               h=m2-1;
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.
int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 

// } Driver Code Ends