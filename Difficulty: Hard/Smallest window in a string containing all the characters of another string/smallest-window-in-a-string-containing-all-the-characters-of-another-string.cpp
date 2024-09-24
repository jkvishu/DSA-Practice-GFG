//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int i,c=0,n=s.length(),m=p.length(),j=0,mx=INT_MAX,ws,st=-1;
        int mp[256]={0};
        int ms[256]={0};
        for(i=0;i<m;i++)
        {
            mp[p[i]]++;
        }
        for(i=0;i<n;i++)
        {
            ms[s[i]]++;
            if(mp[s[i]]!=0&&ms[s[i]]<=mp[s[i]])
            {
                c++;
            }
            if(c==m)
            {
                while(mp[s[j]]==0||ms[s[j]]>mp[s[j]])
                {
                    ms[s[j]]--;
                    j++;
                }
                ws=i-j+1;
                if(ws<mx)
                {
                    mx=ws;
                    st=j;
                }
            }
        }
        if(st==-1)
        {
            return "-1";
        }
        return s.substr(st,mx);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends