//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        //Question language is tricky otherwise solution is of school level
        //Done in first attempt
        int i,sum=0,num;
        for(i=0;i<N;i++){
            num=arr[i];
            while(num){
                sum+=num%10;
                num=num/10;
            }
        }
        if(sum%3==0)
        return 1;
        else
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends