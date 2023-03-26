//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        //✅💯😏
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=arr[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int l=0,h=n-1,m;
            while(l<=h){
                m=l+(h-l)/2;
                if(arr[i]<a[m]){
                    h=m-1;
                }
                else if(arr[i]>a[m]){
                    l=m+1;
                }
                else{
                    break;
                }
            }
            if(abs(i-m)>k)
            return "No";
        }
        return "Yes";
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends