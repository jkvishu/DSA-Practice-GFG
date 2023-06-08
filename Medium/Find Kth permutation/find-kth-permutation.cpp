//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        // POTD ✅©👀
       string s="";
       for(int i=1;i<=n;i++)
       {
           s+=to_string(i);
       }
       if(k==1)
       return s;
       k--;
       while(k--)
       {   
        //   cout<<s<<endl;
           next_permutation(s.begin(),s.end());
       }
       return s;
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