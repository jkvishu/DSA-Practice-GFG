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
    int partition(int arr[],int l,int h){
        //Hoare's partition method.
        //Little Faster than Lomuto Partition ayi baat smjh beta
        //Practice makes the man perfect by vishu tyagi 😂
        int i=l-1,j=h+1;
        while(1){
            do{
                i++;
            }while(arr[i]<arr[l]);
            do{
                j--;
            }while(arr[j]>arr[l]);
            if(i>=j)
            return j;
            swap(arr[i],arr[j]);
        }
    }
    
    /*int partition(int arr[],int l,int h){
        //Lomuto Partition method with O(1) space.
        int i=l-1;
        int j=l;
        while(j<h){
            if(arr[j]<arr[h]){
                i++;
                swap(arr[i],arr[j]);
            }
            j++;
        }
        swap(arr[i+1],arr[h]);
        return i+1;
    }*/
    void quickSort(int arr[], int l, int h)
    {
        // code here
        // Now it was asked in POTD ✅💯😏
        // Revision of Quick Sort is very important
        if(l>=h)
        return;
        int p=partition(arr,l,h);
        quickSort(arr,l,p);
        quickSort(arr,p+1,h);
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
