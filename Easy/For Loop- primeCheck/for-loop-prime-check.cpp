//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete this function
string isPrime(int n) {
    if(n==1)
    return "No";
    if(n==2|n==3||n==5)
    return "Yes";
    if(n%2==0||n%3==0)
    return "No";
    for (int i = 2; i <= sqrt(n); i=i+1) {
        if(n%i==0)
        return "No";
    }
    return "Yes";
}

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}
// } Driver Code Ends