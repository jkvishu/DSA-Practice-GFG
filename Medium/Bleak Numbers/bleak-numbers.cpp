//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int is_bleak(int m)
	{
	    // Code here.
	    // POTD ❌👀©
	    for(int i=m-1; i>=m-32; i--){
           if(i<0){continue;}
           if(i+__builtin_popcount(i) == m) return 0;
       }
       return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends