//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            // ✅🤝💯
            // POTD -> 31/03/2023
            int k=0,i=0;
            while(i<n){
                if(a[i]%2==0){
                    while(i<n&&a[i]%2==0){
                        i++;
                    }
                    sort(a.begin()+k,a.begin()+i,greater<int>());
                    k=i;
                }
                else{
                    while(i<n&&a[i]%2!=0){
                        i++;
                    }
                    sort(a.begin()+k,a.begin()+i,greater<int>());
                    k=i;
                }
            }
            return a;
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
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends