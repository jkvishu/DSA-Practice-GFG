//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string removeBrackets(string s){    
        //code here
        //©❌👀
        int n=s.size();
        vector<int> ans(n+1,1);
        int ll[n+1],rr[n+1];
        
        int l=-1;
        for(int i=0;i<n;i++)
        {
            ll[i]=l;
            if(s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/') l=s[i];
        }
        l=-1;
        for(int i=n-1;i>=0;i--)
        {
            rr[i]=l;
            if(s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/') l=s[i];
        }
        
        stack<int> st;
        int sign[256],mp[256]={0};
        memset(sign,-1,sizeof(sign));
        
        vector<char> op={'*','+','-','/'};
        
        for(int p=0;p<n;p++)
        {
            for(auto j:op)
            {
                mp[j]=0;
                if(s[p]==j) sign[j]=p;
                if(s[p]=='(') st.push(p);
                else if(s[p]==')')
                {
                    int i=st.top();
                    int j=p;
                    
                    int nxt=rr[j];
                    int lst=ll[i];
                    st.pop();
                    for(auto j:op) if(sign[j]>=i) mp[j]=1;
                    int ok=0;
                    
                    if(i>0 && j+1<n && s[i-1]=='(' && s[j+1]==')') ok=1;
                    if(mp['+']==0 && mp['-']==0&&mp['*']==0&&mp['/']==0) ok=1;
                    if(lst==-1 && nxt==-1) ok=1;
                    if(lst=='/') {}
                    else if(lst=='-' && (mp['+']==1 || mp['-']==1)) {}
                    else if(mp['-']==0 && mp['+']==0) ok=1;
                    else
                    {
                        if( (lst==-1 || lst=='+' || lst=='-') && (nxt==-1 || nxt=='+' ||nxt=='-') ) ok=1;
                    }
                    if(ok==1)
                    {
                        ans[i]=0;
                        ans[j]=0;
                    }
                }
            }
        }
        string res="";
        for(int i=0;i<n;i++) if(ans[i]) res+=s[i];
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string Exp;
        cin >> Exp;
        
        Solution ob;
        cout << ob.removeBrackets(Exp) << endl;
    }
    return 0; 
} 

// } Driver Code Ends