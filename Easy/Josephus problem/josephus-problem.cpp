//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    //SOLUTION 3:-> //PURE recursion
    int hallfame(int n,int k){
        if(n==1)
        return 0;
        else
        return (hallfame(n-1,k)+k)%n;
    }
    int josephus(int n, int k){
        return hallfame(n,k)+1;
    }
    /*
    SOLUTION 2:->
    int help(vector<int>&v,int n,int k,int i){
        if(n==1){
            return v[0];
        }
        i=(i+(k-1))%v.size();
        v.erase(v.begin()+i);
        help(v,n-1,k,i);
    }
    int josephus(int n, int k)
    {
        //Let's drive a recursive solution for the same.
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        return help(v,n,k,0);
    }*/
   /*
   SOLUTION 1:->
   {
       //Your code here
       //Done after help from yt
       //This is iterative version of josephus problem.
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
