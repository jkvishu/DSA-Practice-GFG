//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        // code here
        // POTD ❌© 👀
        if(n*9<s||(n>1&&s==0))return "-1";        
        string t="";
        int d=s/9;
        for(int i=0;i<d;i++)
        t+="9";
        if(t.size()!=n)
        {   char ch=(s%9+'0');
            t+=ch;
        }

        for(int i=t.size();i<n;i++)
        t+="0";
        return t;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends