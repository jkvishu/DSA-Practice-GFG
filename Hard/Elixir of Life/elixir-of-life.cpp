//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int maxFrequency(string S)
    {
    	// code here
    	//©❌👀
    	int ans=1;
        int n=S.size();
        string temp;;
    	for(int i=0;i<n;i++){
    	    string s1=S.substr(0,i+1);
    	    string s2=S.substr(n-i-1,i+1);
    	    if(s1==s2){
    	        temp=s1;
    	        break;
    	    }
    	}
    	for(int i=temp.size();i<n;i++){
    	    ans+=(temp==S.substr(i,temp.size()));
    	}
    	return ans;
    }
};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
   		Solution obj;
   		cout << obj.maxFrequency(str) << "\n";
   	}
    return 0;
}
// } Driver Code Ends