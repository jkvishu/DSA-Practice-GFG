//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        // ✅💯😏
        sort(arr.begin(),arr.end());
        int ans=0,sum=0,cal=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
            if(sum<=K){
                cal++;
                ans=max(ans,cal);
            }
            else{
                sum=arr[i];
                cal=1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends