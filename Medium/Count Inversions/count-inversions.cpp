//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long int arr[],long long int l,long long int m,long long int r){
         //❌🤝🤝👀GFG-C
         long long int n1=m-l+1;
         long long int n2=r-m;
         long long int ax1[n1];
         long long int ax2[n2];
         for(int i=0;i<n1;i++){
             ax1[i]=arr[l+i];
         }
         for(int j=0;j<n2;j++){
             ax2[j]=arr[j+m+1];
         }
         long long int i=0,j=0,k=l,c=0;
         while(i<n1&&j<n2){
             if(ax1[i]<=ax2[j]){
                 arr[k]=ax1[i];
                 i++;
             }
             else{
                 c+=(n1-i);
                 arr[k]=ax2[j];
                 j++;
             }
             k++;
         }
         while(i<n1){
             arr[k++]=ax1[i];
             i++;
         }
         while(j<n2){
             arr[k++]=ax2[j];
             j++;
         }
         return c;
    }
    long long find(long long arr[],long long l,long long h){
        long long res=0;
        if(l<h){
        long long q=l+(h-l)/2;
        res+=find(arr,l,q);
        res+=find(arr,q+1,h);
        res+=merge(arr,l,q,h);
        }
        return res;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return find(arr,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends