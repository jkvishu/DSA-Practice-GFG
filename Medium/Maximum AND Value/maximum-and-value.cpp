//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
 
class Solution
{
    public:
    // Function for finding maximum AND value.
    int findbit(int data,int a[],int n){
        int c=0;
        for(int i=0;i<n;i++){
            if((data&a[i])==data)
            c++;
        }
        return c;
    }
    int maxAND (int arr[], int N)
    {
        // Your code here
        //below code is a naive solution for the problem and anyone can do this but it throws TLE because constraints are big
        //Lets see if we can optimize it
        /*int mx=0;
        int i,j;
        for(i=0;i<N-1;i++){
            for(j=i+1;j<N;j++){
                mx=max(mx,(arr[i]&arr[j]));
            }
        }
        return mx;*/
        //Done after taking help from youtube
        //Done by Vishu Tyagi
        int res=0,count;
        for(int i=16;i>=0;i--){
            count=findbit(res|(1<<i),arr,N);
            
            if(count>=2)
            res=res|(1<<i);
        }
        return res;
    }
};

//{ Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;//testcases
    while(t--)
    {
        int n;
        cin>>n;//input n
        int arr[n+5],i;
        
        //inserting elements
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        //calling maxAND() function
        cout <<  obj.maxAND(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends