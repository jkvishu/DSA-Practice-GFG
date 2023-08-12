//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
     //Function to find length of longest increasing subsequence.
    public:
    /*int longestSubsequence(int n, int a[])
    {
        //POTD
       // your code here
       // ✅🤝💯👀
       // DP
       int dp[n]={0};
       dp[0]=1;
       for(int i=1;i<n;i++){
           dp[i]=1;
           for(int j=0;j<i;j++){
               if(a[j]<a[i]){
                   dp[i]=max(dp[i],dp[j]+1);
               }
           }
       }
       int ans=dp[0];
       for(int i=1;i<n;i++){
           ans=max(ans,dp[i]);
       }
       return ans;
    }
    public:
    /*int longestSubsequence(int n, int a[])
    {
        //POTD
        //Let's see binary search approach which solve this question in O(nlogn) time whihc is the required time complexity,
        //✅💯🤝😏
        vector<int>bs;
        bs.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>bs[bs.size()-1]){
                bs.push_back(a[i]);
            }
            else{
            auto it=upper_bound(bs.begin(),bs.end(),a[i]);
            bs[it-bs.begin()]=a[i];
            }
        }
        return bs.size();
    }*/
    int longestSubsequence(int n, int a[])
    {
       //POTD
      vector<int>ans;
             ans.push_back(a[0]);
             int length=1;
             for(int i=1;i<n;i++){
                 if(a[i]>ans.back()){
                     ans.push_back(a[i]);
                     length++;
                 }
                 else{
                     int index = lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
                     ans[index]=a[i];
                 }
             }
             return length;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends