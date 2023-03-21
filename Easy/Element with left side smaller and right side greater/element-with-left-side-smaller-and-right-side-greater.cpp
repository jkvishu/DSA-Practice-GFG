//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    //✅💯😏
    int ans=-1,mx=arr[0];
    int f=1;
    for(int i=1;i<n;i++){
        if(arr[i]>=mx&&arr[i]>=arr[i-1]&&f==1&&i!=n-1){
            ans=arr[i];
            mx=arr[i];
            f=0;
        }
        else if(arr[i]<mx||arr[i]<arr[i-1]){
            f=1;
            ans=-1;
        }
    }
    return ans;
}