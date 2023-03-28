//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string str)
   {
        //code here
        //done in first attempt with my own logic in 0.21 sec.
        //Amazon or microsoft wale ye itne easy question dete ha kya
        //✅😏💯
        int a[26]={0};
        int i,n=str.length();
        for(i=0;i<n;i++)
        {
            a[str[i]-'a']++;
        }
        priority_queue<pair<int,char>>p;
        pair<int,char>l;
        pair<int,char>q;
        for(i=0;i<26;i++)
        {
            if(a[i]>0)
            {
            p.push(make_pair(a[i],'a'+i));
            }
        }
        str="";
        while(!(p.empty()))
        {
            str.push_back(p.top().second);
            l=p.top();
            l.first--;
            p.pop();
            if(!(p.empty()))
            {
                str.push_back(p.top().second);
                q=p.top();
                q.first--;
                p.pop();
                if(q.first>0)
                {
                    p.push(q);
                }
            }
            if(l.first>0)
            {
                p.push(l);
            }
        }
        for(i=1;i<n;i++)
        {
            if(str[i]==str[i-1])
            {
                return "-1";
            }
        }
        return str;
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
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}
// } Driver Code Ends