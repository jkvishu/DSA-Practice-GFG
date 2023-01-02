//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        //Done by me on my own
        if(n==1)
        {
        cout<<1;
        }
        else{
        int i;
        set<int>s;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                s.insert(i);
                s.insert(n/i);
            }
        }
        for(auto i:s){
            cout<<i<<" ";
        }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends