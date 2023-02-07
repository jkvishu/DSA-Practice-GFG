//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    /*{
       //Your code here
       //✅💯😏
       //1.First method single traversal.
       int i=-1,l=N;
       while(i<l){
           do{
               i++;
           }while(A[i]==0);
           do{
               l--;
           }while(A[l]==1);
           if(i>l)
           break;
           swap(A[i],A[l]);
       }
    }*/
    /*{
        //Second method ✅💯
        int i=0,c0=0,c1=0,j;
        for(int i=0;i<N;i++){
            if(A[i]==0)
            c0++;
            else
            c1++;
        }
        i=j=0;
        while(i<c0){
            A[j++]=0;
            i++;
        }
        i=0;
        while(i<c1){
            A[j++]=1;
            i++;
        }
    }*/
    {
        //Third method.
        //This is nice one ❌😏
        int i=0, j=0;
       while(j<N){
           if(A[j]==0){ 
               A[j]=1;
               A[i++]=0;
           }
           j++;
       }
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends
