//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        // POTD ;-> 19/04/2023
        // ✅🤝👀
        int c=0;
        for(int i=0;i<N;i++){
            if(S[i]=='1'){
                if(c-X>0)
                return 0;
                else{
                    c=0;
                    c=c-X;
                }
            }
            else
            c++;
        }
        if(c>0)
        return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends