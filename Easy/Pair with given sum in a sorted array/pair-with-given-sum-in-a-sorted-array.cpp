//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        // Complete the function
        //✅💯
        int l=0,h=n-1,c=0;
        while(l<h){
            int x=sum-arr[h];
            while(l<h&&arr[l]<x)
            {
                l++;
            }
            if(l<h&&arr[l]==x)
            {
            c++;
            l++;
            }
            else
            {
            if(l!=0)    
            l--;
            }
            h--;
        }
        if(c==0)
        return -1;
        return c;
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
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends