//{ Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}

// } Driver Code Ends



int kthSmallest(int mat[MAX][MAX], int n, int k)
/*{
  //Your code here
  //Naive solution to solve it
  //❌👀👀❌
  int count=0;
    priority_queue<int ,vector<int>, greater<int>>pq;
  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
          pq.push(mat[i][j]);
      }
  }
  while(count!=k-1){
      pq.pop();
      count++;
  }
  return pq.top();
}*/
{
    //Efficient SOlution
    //❌👀👀❌
    int start=mat[0][0];
    int end=mat[n-1][n-1];
    int res=INT_MAX;
    while(start<=end){
    int mid=start+(end-start)/2;
    int count=0;
      for(int i=0;i<n;i++){
        count+=upper_bound(mat[i],mat[i]+n,mid)-mat[i];
        }
        if(count>=k){
          res=mid;
          end=mid-1;        
        }else{
          start=mid+1;
        }
    }
    if(res==INT_MAX){
        return -1;
    }else{
        return res;
    }
}
