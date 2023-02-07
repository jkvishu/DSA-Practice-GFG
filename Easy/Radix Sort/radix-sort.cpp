//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

void countsort(int arr[],int n,int p){
    int count[10],ax[n];
    for(int i=0;i<10;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[(arr[i]/p)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]=count[i-1]+count[i];
    }
    for(int i=n-1;i>=0;i--){
        ax[count[(arr[i]/p)%10]-1]=arr[i];
        count[(arr[i]/p)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=ax[i];
    }
}
void radixSort(int arr[], int n) 
{ 
   // code here
   // ❌👀🤝GFG_C
   int mx=*max_element(arr,arr+n),c=0;
   while(mx){
       c++;
       mx=mx/10;
   }
   int i=0,k=1;
   while(i<c){
       countsort(arr,n,k);
       k=k*10;
       i++;
   }
   
   
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends