//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  /*
   int find(int d,int i,int j){
        if(abs(i)>d)
        return 1e8;
        if(i==d)
        {
            return j;
        }
        int left=find(d,i+j,j+1);
        int right=find(d,i-j,j+1);
        return min(left,right);
    }
    int minSteps(int d) {
        // code here
        // POTD
        // 😏✅💯
        // Recursive Approach
        return find(d,0,1)-1;
    }
  */
    int minSteps(int d) {
        // code here
        /*
        we can keep adding the moves till our sum is not equal to or greater than the number 
if sum is equal to the number then that is our ans
if sum is greater than the sum then we need to subtract that difference from our sum
and to subtract that difference we need the difference to be even, 
So if the difference is even then we return i only 
if difference is odd and next number is odd then we can make our difference even so we return i+1
and if next number is even we return i+2 to make the difference even
        */
        //POTD
        //😏✅💯🤝
        int ans=0,sp=0;
        while(ans<d||abs(ans-d)%2!=0){
            sp++;
            ans=ans+sp;
        }
        return sp;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends