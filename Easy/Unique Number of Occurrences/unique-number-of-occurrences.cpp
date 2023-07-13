//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        //POTD ✅😏💯
        //IT was an easu POTD
        unordered_map<int,int>m;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        auto it=m.begin();
        while(it!=m.end()){
            if(s.find(it->second)==s.end())
            s.insert(it->second);
            else
            return 0;
            ++it;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends