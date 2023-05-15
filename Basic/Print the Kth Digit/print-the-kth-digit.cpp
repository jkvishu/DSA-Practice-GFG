//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        // ✅💯😏
        long long int ans=pow(A,B);
        while(K>1&&ans){
            ans=ans/10;
            K--;
        }
        return ans%10;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends