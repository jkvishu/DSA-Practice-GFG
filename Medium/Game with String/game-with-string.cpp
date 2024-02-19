//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        // POTD
        // ✅💯😏
        if(s.length()==0)
        return 0;
        int a[26]={0};
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        priority_queue<int>pq;
        for(int i=0;i<26;i++){
            if(a[i]>0)
            pq.push(a[i]);
        }
        while(k){
            int x=pq.top();
            pq.pop();
            x--;
            k--;
            pq.push(x);
        }
        int ans=0;
        while(!pq.empty()){
            int x=pq.top();
            ans+=(x*x);
            pq.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends