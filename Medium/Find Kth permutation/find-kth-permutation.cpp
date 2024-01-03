//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void findit(vector<int>&a,int n,vector<int>&ans,int k,vector<int>&facts){
    while(n){
        if(facts.size()!=0){ //if not done this than getting a very wierd error.
        int f=facts.back();
        int p=k/f;
        ans.push_back(a[p]);
        auto it=find(a.begin(),a.end(),a[p]);
        a.erase(it);
        facts.pop_back();
        k=k%f;
        }
        else{
            ans.push_back(a[0]);
        }
        n--;
    }
}
    string kthPermutation(int n, int k)
    {
        // code here
        // ✅😏💯🤝
        // Striver op
        string fans="",anns;
        vector<int>a(n);
        vector<int>facts;
        vector<int>ans;
        int p=1;
        for(int i=1;i<=n;i++){
            a[i-1]=i;
            p=p*i;
            facts.push_back(p);
        }
        k=k-1;
        facts.pop_back();
        findit(a,n,ans,k,facts);
        for(int i=0;i<n;i++){
            fans.push_back(ans[i]+'0');
        }
        return fans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends