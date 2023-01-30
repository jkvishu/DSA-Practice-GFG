//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countTriplets(int Arr[], int N, int L, int R) {
        // code here
        //❌🤝👀
        //Chutya ka lund Question tha ye
        if(N<3)
        return 0;
        sort(Arr,Arr+N);
        int c1=0,c2=0;
        for(int i=0;i<N-2;i++){
            int l=i+1;
            int h=N-1;
            while(l<h){
                int sum=Arr[l]+Arr[h]+Arr[i];
                if(sum<=R)
                {
                c1+=(h-l);
                l++;
                }
                else
                h--;
            }
        }
        for(int i=0;i<N-2;i++){
            int l=i+1;
            int h=N-1;
            while(l<h){
                int sum=Arr[l]+Arr[h]+Arr[i];
                if(sum<=L-1)
                {
                c2+=(h-l);
                l++;
                }
                else
                h--;
            }
        }
        return (c1-c2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        int L, R;
        cin >> L >> R;
        Solution obj;
        cout << obj.countTriplets(Arr, N, L, R) << endl;
    }
    return 0;
}
// } Driver Code Ends