//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        // We have to create a solution in which we must not use extra space.
        // We will use Moore's voting algorithm.
        int major=a[0],count=1,i,l=size/2;
        for(i=1;i<size;i++)
        {
            if(a[i]==major)
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                major=a[i];
                count=1;
            }
        }
        if(count>l)
        {
            return major;
        }
        else
        {
           count=0;
           for(i=0;i<size;i++)
           {
               if(a[i]==major)
               {
                   count++;
               }
           }
           if(count>l)
           {
               return major;
           }
           else
           {
               return -1;
           }
        }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends