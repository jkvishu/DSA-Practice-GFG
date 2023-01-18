//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        //Optimize code after an edit.....
        if(n==1)
        return {0};
        sort(arr,arr+n);
        vector<int>v;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                v.push_back(n-i-1);
            }
        }
        if(v.size()==0)
        return {0};
        return v;
        /*
        //Done in first attempt with my own logic but this throws TLE becauses it is a nive solution for this problem
        if(n==1)
        return {0};
        vector<int>v;
        int i=0,j=n,x,k;
        sort(arr,arr+n);
        while(j-i!=0){
            x=arr[i];
            k=i;
            while(k<n){
                arr[k]=arr[k]-x;
                if(arr[k]<=0){
                    i++;
                }
                k++;
            }
            if(j-i!=0){
            v.push_back(j-i);
            }
        }
        if(v.size()==0)
        return {0};
        return v;*/
    }
};

//{ Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}
// } Driver Code Ends