//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         //Joood ✅💯😏
         if(n<3)
         return -1;
         if(n==3)
         return min({a[0],a[1],a[2]});
         vector<int>v;
         v.push_back(a[0]);
         v.push_back(a[1]);
         v.push_back(a[2]);
         sort(v.begin(),v.end());
         int i=v[0],j=v[1],k=v[2];
         for(int l=3;l<n;l++){
             if(a[l]>k){
                i=j;
                j=k;
                k=a[l];
             }
             else if(a[l]>j){
                 i=j;
                 j=a[l];
             }
             else if(a[l]>i){
                 i=a[l];
             }
         }
         return i;
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends