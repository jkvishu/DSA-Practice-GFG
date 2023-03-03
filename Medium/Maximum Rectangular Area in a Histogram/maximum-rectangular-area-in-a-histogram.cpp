//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        // GGF-C
        // ✅🤝👀
        long long ans=0;
        long long cal=0;
        stack<long long>s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&arr[s.top()]>=arr[i]){
                long long tp=s.top();
                s.pop();
                cal=arr[tp]*(s.empty()?i:(i-s.top()-1));
                ans=max(ans,cal);
            }
            s.push(i);
        }
        while(!s.empty()){
            long long tp=s.top();
            s.pop();
            cal=arr[tp]*(s.empty()?n:(n-s.top()-1));
            ans=max(ans,cal);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends