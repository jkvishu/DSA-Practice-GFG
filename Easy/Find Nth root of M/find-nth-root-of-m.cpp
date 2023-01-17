//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    //Done on my own in first attempt
	    if(n==1 || m==1)
	    return m;
	    int x=sqrt(m);
	    long long int y,i;
	    if(n==2&&(x*x)==m)
	    return x;
	    x++;
	    while(x>1){
	        y=1;
	        i=0;
	        while(i<n&&y<m){
	            y=y*x;
	            i++;
	        }
	        if(y==m&&i==n){
	            return x;
	        }
	        x--;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends