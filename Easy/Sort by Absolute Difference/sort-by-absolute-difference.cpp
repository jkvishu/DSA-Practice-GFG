//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
    void sortABS(int A[],int N, int k)
    {
       //Your code here
       //✅💯😏
       vector<int>v(N);
       vector<pair<int,int>>p;
       for(int i=0;i<N;i++){
           p.push_back({abs(A[i]-k),i});
           v[i]=A[i];
       }
       sort(p.begin(),p.end());
       for(int i=0;i<p.size();i++){
           A[i]=v[p[i].second];
       }
    }

};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    Solution ob;
	   
	    ob.sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends