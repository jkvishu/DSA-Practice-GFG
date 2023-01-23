//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	
	
	public:
	bool areConsecutives(long long arr[], int n) 
	{ 
	    // Your code goes here
	    //Simple Ap concept lagega and repition hoga to simple no hoga damnn easy...
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++){
	        m[arr[i]]++;
	    }
	    auto it=m.begin();
	    while(it!=m.end()){
	        if(it->second>1)
	        return 0;
	        ++it;
	    }
	    int mx=*max_element(arr,arr+n);
	    int mn=*min_element(arr,arr+n);
	    if((mn+(n-1)==mx))
	    return 1;
	    return 0;
	}
		 

};
	 

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    long long a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       
        Solution ob;
        if(ob.areConsecutives(a, n) == true)
	        cout<<"Yes";
	    else
	        cout<<"No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends