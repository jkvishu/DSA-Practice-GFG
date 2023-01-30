//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int n, int sum);
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];  //array of size n
            
        for(int i = 0; i < n; i++)
            cin>>arr[i]; //Input the array
             
        int sum; 
        cin>>sum;
          
        cout<< sumExists(arr, n, sum) <<endl;    
            
	}
}
// } Driver Code Ends


//User function Template for C++

int sumExists(int arr[], int n, int sum){
    //code here
    //✅💯
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        int x=sum-arr[i];
        if(m.find(x)!=m.end()){
            if(x!=arr[i]){
                return 1;
            }
        }
    }
    return 0;
}