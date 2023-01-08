//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
   	int find(int n){
   	    // Code here
   	    //Done using binary search on my own
   	    //Done By Vishu Tyagi
   	    if(n==1)
   	    return 1;
   	    if(n==2)
   	    return -1;
   	    if(n==3)
   	    return 2;
   	    long long int l=0,h=(n+1)/2,m;
   	    long long sum;
   	    while(l<=h){
   	        m=l+(h-l)/2;
   	        sum=m*(m+1)/2;
   	        if(sum<n){
   	            l=m+1;
   	        }
   	        else if(sum>n){
   	            h=m-1;
   	        }
   	        else{
   	            return m;
   	        }
   	    }
   	    return -1;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.find(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends