//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	    // POTD
	    // ©❌
	       if(n%k!=0) return 0;
        else if(n/k==2) return 1;
        unordered_map<string,int> mp;
        for(int i=0;i<s.size();i=i+k){
            string tmp = s.substr(i,k);
            mp[tmp]++;
        }
        if(mp.size()==1) return 1;
        if(mp.size()==2){
            for(auto it:mp){
                if(it.second==1){
                    return 1;
                }
            }
        }
        return 0;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends