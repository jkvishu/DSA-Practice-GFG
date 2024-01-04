//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        // Ek number logic
        // pep_coding op
        // ✅🤝😏💯
        // Most optimal approach.
        // POTD
        int a1=INT_MAX,b1=0,c1=0;
        int d1,d2,d3;
        for(int i=0;i<N;i++){
            d1=a1&abs(arr[i]);
            d2=b1&abs(arr[i]);
            d3=c1&abs(arr[i]);
            b1=b1|d1;
            a1=a1&(~d1);
            c1=c1|d2;
            b1=b1&(~d2);
            a1=a1|d3;
            c1=c1&(~d3);
        }
        int cc1=0,cc2=0;
        for(int i=0;i<N;i++){
            if((-1*b1)==arr[i])
            cc1++;
            if(b1==abs(arr[i]))
            cc2++;
        }
        if(cc1==1)
        return (-1*b1);
        else
        return b1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends