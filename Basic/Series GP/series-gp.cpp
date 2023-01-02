//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long power(int r,int n){
	    long long int m=1000000007;
	    long long temp;
	    if(n==0)
   	    return 1;
   	    temp=power(r,n/2)%m;
   	    temp=((temp%m)*(temp%m))%m;
   	    if(n%2==0)
   	    return temp%m;
   	    else 
   	    return (temp*r)%m;
	}
   	int Nth_term(int a, int r, int n)
   	{
   	    // Code here
   	    //done by me on my own
   	    int temp;
   	    long long int m=1000000007;
   	    n=n-1;
   	    temp=(a*power(r,n)%m);
   	    return temp%m;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, r, n;
		cin >> a >> r >> n;
		Solution ob;
		int ans = ob.Nth_term(a, r, n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends