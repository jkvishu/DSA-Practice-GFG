//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

int mod=1e9+7;
class Solution
{
    public:
    int subsequenceCount(string s, string t)
    {
      //Your code here
      //Best optimal approach
      //POTD 22/02/2024
      //©❌🤝👀
      int n = s.length();
        int m = t.length();
        vector<int> next(m+1,0),curr(m+1,0);
        for(int i=n-1; i>=0; --i){
            next[m] = 1;
            for(int j=0; j<m; ++j){
                int ans = 0;
                if(s[i]==t[j]){
                    ans = (next[j+1] + next[j])%mod;
                }
                else{
                    ans = next[j];
                }
                next[j] = ans;
            }
        }
        return next[0];
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends