//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool isvalid(int j,string s,int i){
    while(i<=j){
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}
void justdoit(string &s,vector< vector<string> >&ans,vector<string>&temp,int i,int n){
    if(i==n){
        ans.push_back(temp);
        return;
    }
    for(int j=i;j<s.length();j++){
        if(isvalid(j,s,i)){
            temp.push_back(s.substr(i,j-i+1));
            justdoit(s,ans,temp,j+1,n);
            temp.pop_back();
        }
    }
}
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        // Striver op
        // ✅💯🤝😏
    int n=S.length();
    vector< vector<string> >ans;
    vector<string>temp;
    justdoit(S,ans,temp,0,n);
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends