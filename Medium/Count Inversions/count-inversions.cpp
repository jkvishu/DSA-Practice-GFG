//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long int a[],long long int l,long long int m,long long int h,long long int &ans){
    long long int n1=m-l+1;
    long long int n2=h-m;
    long long int a1[n1],a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=a[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(a1[i]<=a2[j]){
            a[k++]=a1[i];
            i++;
        }
        else {
            a[k++]=a2[j];
            j++;
            ans+=(n1-i);
        }
    }
    while(i<n1){
        a[k++]=a1[i++];
    }
    while(j<n2){
        a[k++]=a2[j++];
    }
}

    void find(long long int a[],long long int l,long long int h,long long int &ans){
    if(l<h){
        int m=(l+h)/2;
        find(a,l,m,ans);
        find(a,m+1,h,ans);
        merge(a,l,m,h,ans);
    }
}
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        // ✅😏💯
        long long int ans=0;
        find(arr,0,N-1,ans);
        return ans;
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