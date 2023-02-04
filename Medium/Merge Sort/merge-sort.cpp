//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         // Sbse badhya sorting algorithm.
         // ✅💯
         int n1=m-l+1;
         int n2=r-m;
         int ax1[n1];
         int ax2[n2];
         for(int i=0;i<n1;i++){
             ax1[i]=arr[l+i];
         }
         for(int j=0;j<n2;j++){
             ax2[j]=arr[j+m+1];
         }
         int i=0,j=0,k=l;
         while(i<n1&&j<n2){
             if(ax1[i]<=ax2[j]){
                 arr[k]=ax1[i];
                 i++;
             }
             else{
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
    }
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        return;
        int q=l+(r-l)/2;
        mergeSort(arr,l,q);
        mergeSort(arr,q+1,r);
        merge(arr,l,q,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends