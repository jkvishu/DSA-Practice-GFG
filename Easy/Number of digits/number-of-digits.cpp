//{ Driver Code Starts


#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

#define pi 1.6180339887498948
class Solution{
public:
    long long noOfDigits(int N){
        // code here
        // using Binet's Formula
        // LOl to hard to solve in O(1) time complexity.
        // It's tough to derive this formulae
        // ❌🥵©
        if (N == 1 || N==2 || N==3 || N==4 || N==5)
        return 1;
        long double ans = (N * log10(pi)) -((log10(5)) / 2);
        return ceil(ans);
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.noOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends