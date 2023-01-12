//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        //Ye to basic question ha ek hi baar me hoga 😂
        if((N&(N-1))==0){
            int i=0;
            while(N){
                if((N&1)!=0){
                    return i+1;
                }
                i++;
                N=N>>1;
            }
            return -1;
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends