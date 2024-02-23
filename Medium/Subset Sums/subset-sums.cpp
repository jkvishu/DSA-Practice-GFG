//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void find(vector<int>&ans,int i,int sum,int n,vector<int>&arr){
        if(i>=n){
            ans.push_back(sum);
            return;
        }
        sum+=arr[i];
        find(ans,i+1,sum,n,arr);
        sum-=arr[i];
        find(ans,i+1,sum,n,arr);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        // Recursive solution of mine
        // ✅😏💯
        // Done in first attempt.
        vector<int>ans;
        find(ans,0,0,N,arr);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends