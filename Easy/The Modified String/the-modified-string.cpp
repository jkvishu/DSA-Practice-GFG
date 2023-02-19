//{ Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string s)
    {
        // Your code here
        // ✅💯😏
        int ans=0,a[26]={0};
        a[s[0]-'a']++;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
            a[s[i]-'a']++;
            }
            else{
                a[s[i]-'a']=1;
                a[s[i-1]-'a']=0;
            }
            if(a[s[i]-'a']>2){
                ans++;
                a[s[i]-'a']=1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}

// } Driver Code Ends