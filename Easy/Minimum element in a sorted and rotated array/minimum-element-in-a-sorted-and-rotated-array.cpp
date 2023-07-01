//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    /*int findMin(int arr[], int n){
        //complete the function here
        //✅💯😏
        //This code works fine and it's almost optimize but not fully optimized.Hence more work can be done
        int i=0,j=n-1,m;
        while(i<=j){
            m=(i+j)/2;
            if(arr[m]>arr[j]){
                i=m+1;
            }
            else if(arr[m]<arr[i]){
                j=m;
            }
            else{
                break;
            }
        }
        while(m-1>=0&&arr[m-1]<arr[m]){
            m--;
        }
        return arr[m];
    }*/
    int findMin(int arr[], int n){
        //✅💯😏🤝
        //This one is the most optmized solution
        int ans=INT_MAX;
        int l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(arr[l]<=arr[m]){
                ans=min(ans,arr[l]);
                l=m+1;
            }
            else{
                ans=min(ans,arr[m]);
                h=m-1;
            }
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
