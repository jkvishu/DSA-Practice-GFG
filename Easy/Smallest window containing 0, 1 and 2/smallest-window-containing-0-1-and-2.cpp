//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        // ✅💯😏
        // POTD
        // OPtimized approach
        int ans=INT_MAX;
        int j=-1,k=-1,l=-1,i;
        int n=S.length();
        for(i=0;i<S.length();i++){
            if(S[i]=='0'&&j==-1)
            j=i;
            if(S[i]=='1'&&k==-1)
            k=i;
            if(S[i]=='2'&&l==-1)
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
        while(l<n&&j<n&&k<n){
            if(l==h){
                p=S[l];
                l++;
                while(l<n&&p!=S[l]){
                    l++;
                }
                if(l>=n)
                break;
            }
            else if(j==h){
                p=S[j];
                j++;
                while(j<n&&p!=S[j]){
                    j++;
                }
                if(j>=n)
                break;
            }
            else if(k==h){
                p=S[k];
                k++;
                while(k<n&&p!=S[k]){
                    k++;
                }
                if(k>=n)
                break;
            }
            h=min(j,min(k,l));
            p=max(j,max(k,l));
            ans=min(ans,p-h+1);
        }
        return ans;
        /*
        
         // brute force as extra space is used
         // Done by me on my own both logic.
         // ✅💯😏
        
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
        return ans;*/
    }
};

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
