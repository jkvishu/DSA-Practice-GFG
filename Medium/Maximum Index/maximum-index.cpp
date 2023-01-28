//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        //Still can't do it in one go.😒
        //Well i am always close to 80% of the correct solution for this question
        vector<int>v1(N);
        vector<int>v2(N);
        v1[0]=A[0];
        int mx=A[0];
        for(int i=1;i<N;i++){
            if(A[i]<mx){
                mx=A[i];
                v1[i]=mx;
            }
            else{
                v1[i]=mx;
            }
        }
        mx=A[N-1];
        v2[N-1]=mx;
        for(int i=N-2;i>=0;i--){
            if(A[i]>mx){
                mx=A[i];
                v2[i]=mx;
            }
            else{
                v2[i]=mx;
            }
        }
        int i=0,j=0;
        mx=0;
        while(i<N&&j<N){
            if(v1[i]<=v2[j]){
                mx=max(mx,j-i);
                j++;
            }
            else
            i++;
        }
        return mx;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends