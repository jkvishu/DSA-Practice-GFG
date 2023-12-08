//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
     int check(int x)
     {   
         int c=0;
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {   c=1;
               break; 
            }
            
        } 
        return c;
     }
    
    int minNumber(int a[],int n)
    {    
        int ans=0,sum=0;;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        if(sum==1)
        return 1;
        if(check(sum)==0)
        return ans;
        else
        {
           for(int i=1;i<sum;i++)
            {
                
               if(check(sum+i)==0) 
               {
                   ans=i;
                   return ans;
               }
               
            } 
        }
        
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends