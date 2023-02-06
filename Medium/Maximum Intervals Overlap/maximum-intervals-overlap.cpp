//{ Driver Code Starts
// Program to find maximum guest at any time in a party
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> findMaxGuests(int aya[], int gya[], int N)
	{
	   // Your code goes here
	   //❌🤝👀
	   sort(aya,aya+N);
	   sort(gya,gya+N);
	   int i=1,j=0,ans=1,res,c=1,ans1=aya[0];
	   while(i<N&&j<N){
	       if(aya[i]<=gya[j]){
	           c++;
	           res=aya[i];
	           i++;
	       }
	       else{
	           c--;
	           j++;
	       }
	       if(c>ans){
	           ans=c;
	           ans1=res;
	       }
	   }
	   return {ans,ans1};
	}

};

//{ Driver Code Starts.

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int entry[n],exit1[n];
        for(i=0;i<n;i++)
        cin>>entry[i];
        for(i=0;i<n;i++)
        cin>>exit1[i];
        Solution obj;

	    vector<int> p = obj.findMaxGuests(entry, exit1, n);
	    cout<<p[0]<<' '<<p[1];
	    cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends