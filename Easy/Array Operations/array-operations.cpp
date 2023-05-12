//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        // ✅💯😏
        int ans=0,k=1,flag=0,m=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                ans+=k;
                flag=1;
                k=0;
                m++;
            }
            else
            k=1;
        }
        ans+=k;
        if(flag==0)
        return -1;
        if(n==m)
        return 0;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends