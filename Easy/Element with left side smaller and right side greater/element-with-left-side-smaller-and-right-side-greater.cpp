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


int findElement(int arr[], int n) 
{
    //✅💯😏
    //Without using any extra space la la la la 😎
    //Done by me on my own.
    //Time taken 0.26 sec.
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
/*{
    //Let's see the less optimized solution using the extra space.
    //✅🤝👀
    //Time taken 0.29 sec
    vector<int>v1(n,0);
    vector<int>v2(n,0);
    v1[0]=arr[0];
    v2[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        v1[i]=max(v1[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        v2[i]=min(v2[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>=v1[i-1]&&arr[i]<=v2[i+1])
        return arr[i];
    }
    return -1;
}*/
