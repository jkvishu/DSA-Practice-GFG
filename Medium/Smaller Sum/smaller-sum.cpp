//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        // ✅😏💯
        map<int,long long>m;
        vector<long long>ans;
        long long int sum=0;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        auto it=m.begin();
        while(it!=m.end()){
            int k=m[it->first];
            m[it->first]=sum;
            while(k!=0){
            sum+=it->first;
            k--;
            }
            ++it;
        }
        for(int i=0;i<n;i++){
            ans.push_back(m[arr[i]]);
        }
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
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends