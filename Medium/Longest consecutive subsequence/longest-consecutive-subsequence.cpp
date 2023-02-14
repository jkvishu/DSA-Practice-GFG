//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    //Solution designed by me in this first attempt is working well and Quite Faster than the optimized version but it is quite long.
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
   int ans=0,d=0,x=arr[0];
   for(int i=1;i<N;i++){
       if(arr[i]==arr[i-1])
       continue;
       if(arr[i]==x+1)
       {
           x=arr[i];
           d++;
           ans=max(ans,d);
       }
       else{
           x=arr[i];
           d=0;
       }
   }
   return ans+1;
}
/* int findLongestConseqSubseq(int arr[], int N){
    {
        //Optimized Solution ❌🤝
        //GFG-C.👌🏻
        unordered_set<int>s;
        for(int i=0;i<N;i++){
            s.insert(arr[i]);
        }
        int ans=0,c=0;
        for(int i=0;i<N;i++){
            if(s.find(arr[i]-1)==s.end()){
                int x=arr[i];
                while(s.find(x)!=s.end()){
                    c++;
                    x++;
                }
                ans=max(ans,c);
                c=0;
            }
        }
        return ans;
    }*/
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
