//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        // POTD
        // ✅😏💯
        long long int ans=INT_MIN;
        long long int sum1=0,sum2;
        for(int i=0;i<k;i++){
            sum1+=a[i];
        }
        ans=max(ans,sum1);
        sum2=sum1;
        int j=0;
        for(int i=k;i<n;i++){
            sum1+=a[i];
            sum2=(sum2+a[i])-a[j];
            if(sum2>sum1){
                sum1=sum2;
            }
            ans=max(ans,sum1);
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends