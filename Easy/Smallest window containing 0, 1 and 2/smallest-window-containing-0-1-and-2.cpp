//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        // brute force as extra space is used
        // ✅💯
        queue<int>q1;
        queue<int>q2;
        queue<int>q3;
        int ans=INT_MAX;
        int h,p;
        for(int i=0;i<S.length();i++){
            if(S[i]=='0')
            q1.push(i);
            if(S[i]=='1')
            q2.push(i);
            if(S[i]=='2')
            q3.push(i);
        }
        if(q1.empty()||q2.empty()||q3.empty())
        return -1;
        while(!(q1.empty()||q2.empty()||q3.empty())){
            h=min(q1.front(),min(q2.front(),q3.front()));
            p=max(q1.front(),max(q2.front(),q3.front()));
            ans=min(ans,p-h+1);
            if(h==q1.front())
            q1.pop();
            else if(h==q2.front())
            q2.pop();
            else if(h==q3.front())
            q3.pop();
        }
        return ans;
    }
};

/*
  int ans=INT_MAX;
        int j=-1,k=-1,l=-1,i;
        for(i=0;i<S.length();i++){
            if(S[i]==0&&j==-1)
            j=i;
            if(S[i]==1&&k==-1)
            k=i;
            if(S[i]==2&&l==-1)
            l=i;
            if(j!=-1&&k!=-1&&l!=-1)
            break;
        }
        if(j==-1||k==-1||l==-1)
        return -1;
        int h=min(j,min(k,l));
        int p=max(j,max(k,l));
        ans=min(ans,p-h+1);
        i++;
        if(j>h&&j<p){
            m=j;
        }
        else if(k>h&&k<p){
            m=k;
        }
        else if(l>h&&l<p){
            m=l;
        }
        j=m;
        k=p;
        l=-1;
        for(;i<S.length();i++){
            if(S[j]!=S[i]&&S[i]!=S[k])
        }
  */

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends