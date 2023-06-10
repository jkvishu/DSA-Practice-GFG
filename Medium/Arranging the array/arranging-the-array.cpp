//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            // We can use extra space to achieve our task but it will not be optimize
            // POTD 😏✅💯
            vector<int>ne;
            vector<int>ps;
            for(int i=0;i<n;i++){
                if(arr[i]<0)
                ne.push_back(arr[i]);
                else
                ps.push_back(arr[i]);
            }
            int k=0;
            for(int i=0;i<ne.size();i++){
                arr[k++]=ne[i];
            }
            for(int i=0;i<ps.size();i++){
                arr[k++]=ps[i];
            }
        }
        /*
        //Optimal approach is this
        //©👀🙃
        public void swap(int arr[], int i, int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
    
    
    public void merge(int start, int mid , int end, int arr[]){
        
        int i = start; 
        int j = mid + 1; 
 
        while (i <= mid && arr[i] < 0)
            i++;
 
 
        while (j <= end && arr[j] < 0)
            j++;
        
        // reverse positive part of the left array 
        reverse(arr, i, mid);
        
        // reverse negative part of the right array
        reverse(arr,mid+1, j-1);
        
        // reverse complete from start of positive in left to the end of the negative in right
        reverse(arr, i, j-1);
        
    }
    
    public void helper(int start, int end, int arr[]){
        if(end-start==1){
            if(arr[start]>=0 && arr[end]<0) swap(arr,start, end);
            return ;
        }
        else if(start==end){
            return ;
        }
        else if(start<end){
            int mid= (end-start)/2 +start;
            helper(start, mid, arr);
            helper(mid+1, end, arr);
            merge(start,mid,end,arr);
        }
    }
    

    
    public void Rearrange(int a[], int N)
    {
        
        helper(0, N-1, a);
    }
    
    void reverse(int arr[], int start, int end){
        while(start<end){
            swap(arr, start, end);
            start++;
            end--;
        }
    }
}
        */
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

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
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends
