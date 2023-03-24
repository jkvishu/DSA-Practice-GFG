//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
        // code here
        // ✅🤝💯
        // POTD 24/03/2023
        string ans="";
        int a[26]={0};
        int i=0,j=S.length()-1;
        int flag=0;
        for(int k=0;k<=j;k++){
            a[S[k]-'a']++;
        }
        while(i<=j){
            if(flag==0){
                if(a[S[i]-'a']>1){
                    a[S[i]-'a']--;
                    S[i]='#';
                    flag=1;
                }
                i++;
            }
            else{
                if(a[S[j]-'a']>1){
                    a[S[j]-'a']--;
                    S[j]='#';
                    flag=0;
                }
                j--;
            }
        }
        if(flag==0){
            for(int i=0;i<S.length();i++){
                if(S[i]!='#'){
                    ans.push_back(S[i]);
                }
            }
        }
        else{
            for(int i=S.length()-1;i>=0;i--){
                if(S[i]!='#'){
                    ans.push_back(S[i]);
                }
            }
        }
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
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends