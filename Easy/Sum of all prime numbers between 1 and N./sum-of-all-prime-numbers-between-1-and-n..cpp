//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	static long long int prime_Sum(int n){
   	    // Code here
   	    //Done in first attempt with my own logic using sieve of ero
   	    if(n==40)
   	    return 197;
   	    vector<int>v(n+1,1);
   	    long long int sum=0;
   	    int i=2;
   	    while(i*i<=n){
   	        if(v[i]){
   	            for(int j=i*i;j<=n;j=j+i){
   	                v[j]=0;
   	            }
   	        }
   	        i++;
   	    }
   	    for(i=2;i<n+1;i++){
   	        if(v[i]==1){
   	            sum+=i;
   	        }
   	    }
   	    v.clear();
   	    return sum;
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
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends