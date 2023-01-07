//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int safePos(int n, int k) {
        // code here
        //It is simlar to joshep problem already know the concept
        //Done by Vishu Tyagi
        vector<int>arr(n);
        int i;
        for(i=0;i<n;i++){
            arr[i]=i+1;
        }
        i=0;
        while(arr.size()!=1){
            i=(i+(k-1))%arr.size();
            arr.erase(arr.begin()+i);
        }
        return arr[0];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends