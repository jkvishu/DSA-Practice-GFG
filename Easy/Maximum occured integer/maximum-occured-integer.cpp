//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        //❌
        //Now let's see an optimize approach of modified prefix sum.
        // GFG-C.
        vector<int>v(maxx+10);
        int i;
        for(i=0;i<n;i++){
            v[L[i]]++;
            v[R[i]+1]--;
        }
        int mx=v[0],res=0;
        for(i=1;i<maxx+10;i++){
            v[i]=v[i]+v[i-1];
            if(v[i]>mx){
                mx=v[i];
                res=i;
            }
        }
        return res;
        //Brute force approach that covers every edge case but It will throw TLE.
        /*
        int i,j,mx=0,c=0,ans=0;
        for(i=0;i<n;i++){
            if(L[i]!=1){
            for(j=0;j<n;j++){
                if(R[j]%L[i]==0){
                    c++;
                }
            }
            if(c>mx){
                mx=c;
                ans=L[i];
            }
            }
            else{
                ans=1;
            }
            c=0;
        }
        return ans;*/
    }
};


//{ Driver Code Starts.

int main() {
	
	int t;
	
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n;
	    
	    //taking size of array
	    cin >> n;
	    int L[n];
	    int R[n];
	    
	    //adding elements to array L
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    
	    //adding elements to array R
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    Solution ob;
	    
	    //calling maxOccured() function
	    cout << ob.maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}
// } Driver Code Ends