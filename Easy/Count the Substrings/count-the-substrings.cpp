//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        // ✅💯😏
        int c1=0,c2=0;
        int ans=0;
        for(int i=0;i<S.length();i++){
            for(int j=i;j<S.length();j++){
                if(S[j]>=65&&S[j]<=90)
                c1++;
                else
                c2++;
                if(c1==c2)
                ans++;
            }
            c1=c2=0;
        }
        return ans;
    }/*
    //Compromising space and having good time complexity
    //Just for knowledge
        int n = S.size();
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            if(S[i]>='A' && S[i]<='Z') a[i] = 1;
            else a[i] = -1;
        }
        map<int, int> mp;
        int sum = 0, ans = 0;
        mp[0] = 1;
        for(auto& x: a) {
            sum += x;
            ans += mp[sum];
            ++mp[sum];
        }
        return ans;
    */
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends
