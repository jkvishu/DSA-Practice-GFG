//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=(i+1);
        }
        int i=0;
        while(v.size()!=1){
            i=(i+(k-1))%v.size();
            v.erase(v.begin()+i);
        }
        return v[0];
    }
   /* {
       //Your code here
       //Done after help from yt
       //Done by Vishu Tyagi
       int j;
       vector<int>arr(n);
       for(j=0;j<n;j++){
           arr[j]=j+1;
       }
       j=0;
       while(arr.size()!=1){
           j=(j+(k-1))%arr.size();
           arr.erase(arr.begin()+j);
       }
       return arr[0];
    }*/
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends