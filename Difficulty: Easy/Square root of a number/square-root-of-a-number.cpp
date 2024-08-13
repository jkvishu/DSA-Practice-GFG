//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int x) {
        // Your code goes here
        //Done in first attempt after geting logic from coding minute.
        if(x==1)
        return 1;
        long long int m,l=0,h=x-1;
        while(l<=h)
        {
            m=floor((l+h)/2);
            if(m*m>x)
            {
                h=m-1;
            }
            else if(m*m<x)
            {
                l=m+1;
            }
            else
            {
                return m;
            }
        }
        return floor((l+h)/2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends