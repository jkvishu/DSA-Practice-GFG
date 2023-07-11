//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		// POTD ✅😏💯
 		if(k>n*m)
 		return -1;
 		if(k==1)
 		return a[0][0];
 		int l=1;
 		int c1=0,c2=m-1,r1=0,r2=n-1;
 		while(1){
 		    int i=c1;
 		    while(i<c2){
 		        if(l==k)
 		        return a[r1][i];
 		        l++;
 		        i++;
 		    }
 		    i=r1;
 		    while(i<r2){
 		        if(l==k)
 		        return a[i][c2];
 		        l++;
 		        i++;
 		    }
 		    i=c2;
 		    while(i>c1){
 		        if(l==k)
 		        return a[r2][i];
 		        l++;
 		        i--;
 		    }
 		    i=r2;
 		    while(i>r1){
 		        if(l==k)
 		        return a[i][c1];
 		        l++;
 		        i--;
 		    }
 		    c1++;
 		    r1++;
 		    c2--;
 		    r2--;
 		}
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends