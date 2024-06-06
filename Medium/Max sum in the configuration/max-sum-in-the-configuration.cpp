//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int A[], int N) {
        // Your code here
        // POTD
        // ✅😏💯
        long long int sum=0,ans=0,i,cal=0,sum1=0;
        for(i=0;i<N;i++)
        {
        sum+=A[i];
        sum1+=(long long)(i*A[i]);
        }
        ans=sum1;
        for(i=1;i<N;i++)
        {
        cal=sum1-(sum-A[i-1])+(long long)A[i-1]*(N-1);
        sum1=cal;
        ans=max(ans,cal);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends