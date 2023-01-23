//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int nums[], int n, int m) {
        // code here
         // Code here
        //Done in first attempt with my own logic.
        if(m==0){
         int ans=0,c=0;
         for(int i=0;i<n;i++){
             if(nums[i]==1)
             {
             c++;
             ans=max(ans,c);
             }
             else
             c=0;
         }
         return ans;
        }
        int i,j=0,mx=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
            {
            mx=max(mx,i-j);
            continue;
            }
            else{
                c++;
                if(c>m){
                    while(c>m&&j<i){
                        if(nums[j]==0){
                            c--;
                        }
                        j++;
                    }
                }
                mx=max(mx,i-j);
            }
        }
        return mx+1;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends