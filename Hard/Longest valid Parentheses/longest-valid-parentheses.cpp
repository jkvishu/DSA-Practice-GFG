//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        // ❌👀🤝
        int ans=0;
        stack<int>s;
        s.push(-1);
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                s.push(i);
            }
            else{ 
                s.pop();
                if(!s.empty()){
                    ans=max(ans,i-s.top());
                }
                else{
                    s.push(i);
                }
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
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends