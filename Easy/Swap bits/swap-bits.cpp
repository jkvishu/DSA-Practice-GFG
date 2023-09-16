//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        // ✅🤝💯👌
        unsigned int a=(x>>p1)&((1U<<n)-1);
        unsigned int b=(x>>p2)&((1U<<n)-1);
        int c=a^b;
        int xr=(c<<p1)|(c<<p2);
        return x^xr;
    }
};

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}
// } Driver Code Ends