//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
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
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      //✅💯
      int mx=*max_element(arr,arr+N),c=0;
   while(mx){
       c++;
       mx=mx/10;
   }
   int i=0,k=1;
   while(i<c){
       countsort(arr,N,k);
       k=k*10;
       i++;
   }
   vector<int>v;
   v.push_back(arr[0]);
   for(int i=1;i<N;i++){
       if(arr[i]!=arr[i-1])
       v.push_back(arr[i]);
   }
   int j=0,ans=0,p=0;
   for(i=1;i<v.size();i++){
       if((v[i]-1)==v[i-1])
       ans=max(ans,i-j);
       else
       j=i;
   }
   return ans+1;
}
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends