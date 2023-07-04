//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        //POTD ✅💯😏
        int ans=0,j=0;
        long long pr=1;
        for(int i=0;i<n;i++){
            if(a[i]<k)
            ans++;
            pr=pr*a[i];
            if(pr<k)
            ans+=(i-j);
            else{
                while(pr>=k&&j<i){
                    pr=pr/a[j];
                    j++;
                }
                ans+=(i-j);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends