//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) 
	{
	    // code here
	    int i,l=0,h=n-1,m,c=0,j;
	    while(l<=h)
	    {
	        m=(l+h)/2;
	        if(arr[m]>x)
	        {
	            h=m-1;
	        }
	        else if(arr[m]<x)
	        {
	            l=m+1;
	        }
	        else
	        {
	            break;
	        }
	    }
	    i=m;
	    j=m+1;
	    while(i>=0&&i<n&&arr[i]==x)
	    {
	        c++;
	        i--;
	    }
	    while(j<n&&j>=0&&arr[j]==x)
	    {
	        c++;
	        j++;
	    }
	    return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends