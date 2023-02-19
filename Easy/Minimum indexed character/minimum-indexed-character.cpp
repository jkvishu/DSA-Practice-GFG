//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        // 💯✅🥱
        int ans=INT_MAX;
        int a[26]={0};
        for(int i=0;i<str.length();i++){
            if(a[str[i]-'a']==0)
            {
                a[str[i]-'a']=i+1;
            }
        }
        for(int i=0;i<patt.length();i++){
            if(a[patt[i]-'a']!=0)
            ans=min(ans,a[patt[i]-'a']);
        }
        if(ans==INT_MAX)
        return -1;
        return ans-1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends