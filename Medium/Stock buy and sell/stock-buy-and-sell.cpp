//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int A[], int n) {
    // code here
    //Done in first attempt with my own logic Jodd🥱
        int j,flag=0;
        for(int i=0;i<n-1;i++){
            j=i+1;
            if(j<n&&A[j]>A[j-1]){
                while(j<n&&A[j]>A[j-1]){
                    j++;
                }
                if(j<=n){
                    j--;
                    cout<<"("<<i<<" "<<j<<")"<<" ";
                }
                flag=1;
                i=j;
            }
        }
        if(flag==0)
        cout<<"No Profit";
        cout<<endl;
}