//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Templs1te for C++
class Solution{
    //Complete the function s1nd return minimum nums2er of opers1tions
    public:
    int specialPalindrome(string s1, string s2){
        //Code Here
        //👀©❌
        int ans=INT_MAX;
        for(int i=0;i<=s1.length()-s2.length();i++) {
            int vs1l = f(s1,s2,i,i+s2.length()-1);
            if(vs1l!=-1) ans=min(ans,vs1l);
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
    int f(string s1,string s2,int strt,int end) {
        int ans=0;
        for(int i=0,j=s1.length()-1;i<=j;i++,j--) {
            if(i>=strt && i<=end) {
                if(j>=strt && j<=end) {
                    if(s2[i-strt]!=s2[j-strt]) return -1;
                    if(s1[i]!=s2[i-strt]) ans++;
                    if(s1[j]!=s2[j-strt] && i!=j) ans++;
                } else {
                    if(s1[i]!=s2[i-strt]) ans++;
                    if(s2[i-strt]!=s1[j] && i!=j) ans++;
                }
            } else {
                if(j>=strt && j<=end) {
                    if(s1[j]!=s2[j-strt]) ans++;
                    if(s2[j-strt]!=s1[i] && i!=j) ans++;
                } else {
                    if(s1[i]!=s1[j]) ans++;
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
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends