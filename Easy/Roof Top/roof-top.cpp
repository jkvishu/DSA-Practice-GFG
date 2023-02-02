//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int maxWater(int arr[], int n)
    {
            // code here 
            // using extra space make this question super easy ✅💯
            int a[n],b[n],ans=0;
            a[0]=arr[0];
            for(int i=1;i<n;i++){
                a[i]=max(arr[i],a[i-1]);
            }
            b[n-1]=arr[n-1];
            for(int i=n-2;i>=0;i--){
                b[i]=max(b[i+1],arr[i]);
            }
            for(int i=0;i<n;i++){
                int c=min(a[i],b[i])-arr[i];
                if(c<0)
                continue;
                ans+=c;
            }
            return ans;
    }
    /*{
        ✅// let's see an optimize solution where extra space will not be used
        //❌🤝
        int lmax=0,rmax=0,i=0,j=n-1,ans=0;
        while(i<j){
            if(arr[i]<arr[j]){
                if(arr[i]>lmax) lmax = arr[i];
                else ans+=(lmax-arr[i]);
                i+=1;
            }else{
                if(arr[j]>rmax) rmax = arr[j];
                else ans+=(rmax-arr[j]);
                j-=1;
            }
        }
        return ans;
    }*/
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxWater(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
