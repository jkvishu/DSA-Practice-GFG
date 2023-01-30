//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    //✅💯
	    sort(arr,arr+n);
	    int c=0;
	    for(int i=0;i<n-2;i++){
	        for(int j=i+1;j<n;j++){
	            int x=arr[i]+arr[j];
	            int l=j+1;
	            int h=n-1;
	            while(l<=h){
	                int m=(l+h)/2;
	                if(arr[m]>x){
	                    h=m-1;
	                }
	                else if(arr[m]<x){
	                    l=m+1;
	                }
	                else{
	                    c++;
	                    break;
	                }
	            }
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends