//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long maximumAmount(int arr[], int n){
        // Your code here
        // Dp very hard and good question
        // Most asked question
        // 🥵❌©👀🤝
        // GFG-C.
        long long int dp[n][n];
        for(int i=0;i<n-1;i++){
            dp[i][i+1]=max(arr[i],arr[i+1]);
        }
        for(int i=3;i<n;i=i+2){
            for(int j=0;j+i<n;j++){
                int k=j+i;
                dp[j][k]=max(arr[j]+min(dp[j+2][k],dp[j+1][k-1]),arr[k]+min(dp[j+1][k-1],dp[j][k-2]));
            }
        }
        return dp[0][n-1];
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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends