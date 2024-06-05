//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    void find(long long int &sum1,int a[],int n){
        for(int i=0;i<n;i++){
            sum1+=a[i];
        }
    }
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        // POTD
        // ✅😏💯
        sort(a,a+n);
        sort(b,b+m);
        long long int sum1=0;
        long long int sum2=0;
        find(sum1,a,n);
        find(sum2,b,m);
        int i=0,j=0;
        while(i<n&&j<m){
            long long int a1=sum1-a[i]+b[j];
            long long int b1=sum2-b[j]+a[i];
            if(a1==b1)
            return 1;
            if(a1>b1)
            i++;
            else
            j++;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends