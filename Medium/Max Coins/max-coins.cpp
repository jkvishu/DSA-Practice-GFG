//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      bool static cmp(vector<int>& a,vector<int>& b){
        if(a[1]!=b[1]) return a[1]<b[1];
        else return a[0]<b[0];
    }
    int maxCoins(int n,vector<vector<int>> &ranges){
        //POTD:-> 4/05/2023
        vector<int> max_end(n,INT_MIN);
        sort(ranges.begin(),ranges.end(),cmp);
        max_end[0]=ranges[0][2];
        for(int i=1;i<n;i++){
            max_end[i]=max(max_end[i-1],ranges[i][2]);
        }
        int max_ans=INT_MIN;

        for(int i=0;i<n;i++){
            int s=0;
            int e=i-1;
            int idx=-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(ranges[mid][1]<=ranges[i][0]){
                    idx=mid;
                    s=mid+1;
                }
                else e=mid-1;
            }
            if(idx!=-1) max_ans=max(max_ans,ranges[i][2]+max_end[idx]);
            else max_ans=max(max_ans,ranges[i][2]);
        }
        return max_ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends