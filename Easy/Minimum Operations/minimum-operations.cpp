//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        // POTD
         if(n==1) return 1;
        int i=2;
        int ans=2;
        
        while(n>3){
            if(n%2 !=0) ans+=2;
            else ans +=1;
            n /= 2;
        }
        if(n==3) ans++;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends