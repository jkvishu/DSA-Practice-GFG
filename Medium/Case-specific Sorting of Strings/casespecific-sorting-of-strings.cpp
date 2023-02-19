//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        //✅💯😏
        string st="";
       map<char,int>m;
       map<char,int>s;
       int i;
       for(i=0;i<n;i++)
       {
           if(str[i]>=65&&str[i]<=90)
           {
               m[str[i]]++;
           }
           else
           {
               s[str[i]]++;
           }
       }
       auto im=m.begin();
       auto is=s.begin();
       for(i=0;i<n;i++)
       {
           if(str[i]>=65&&str[i]<=90)
           {
               st.push_back(im->first);
               im->second--;
               if(im->second==0)
               {
               im++;
               }
           }
           else
           {
               st.push_back(is->first);
               is->second--;
               if(is->second==0)
               {
               is++;
               }
           }
       }
       return st;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends