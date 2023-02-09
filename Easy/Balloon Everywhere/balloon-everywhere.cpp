//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        // Sbse easu question POTD ka 😂
        // ✅🤝
        int a[26]={0};
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        int ans=min({a[1],a[0],a[11]/2,a[14]/2,a[13]});
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends