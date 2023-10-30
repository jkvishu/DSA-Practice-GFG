//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
        //Complete the function
    	//POTD ✅💯👀©
    int mx = *max_element(arr, arr + n);
    int temp;
    long long int a[32] = {0};
    long long int b[32] = {0};
    int k = 0;
    for (int i = 0; i < n; i++) {
        k = 0;
        temp = mx;
        while (arr[i] || temp) {
            if (arr[i] & 1)
                a[k]++;
            else
                b[k]++;
            arr[i] = arr[i] >> 1;
            temp = temp >> 1;
            k++;
        }
    }
    long long int ans = 0, l = 1;
    for (int i = 0; i < 32; i++) {
        ans += (a[i] * b[i] * l);
        l = l * 2;
    }
    return ans;
}

};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends