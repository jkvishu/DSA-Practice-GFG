//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        // Your code here
        //✅💯
        if(n==1){
        if(v[0]<=x)    
        return 0;
        else
        return -1;
        }
        long long int l=0,h=n-1,m;
        while(l<=h){
            m=l+(h-l)/2;
            if(v[m]>x){
                h=m-1;
            }
            else if(v[m]<x){
                l=m+1;
            }
            else{
                return m;
            }
        }
        if(m==0)
        return -1;
        if(m>0&&m<=n-1){
            if(m==n-1&&v[m]<=x)
            return n-1;
            return m-1;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends