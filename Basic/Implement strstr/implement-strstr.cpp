//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     //✅💯😏
     if(x.size()>s.size())
     return -1;
     int j=0;
     for(int i=0;i<s.length()-x.length()+1;i++){
         if(s[i]==x[j]){
             int k=i;
             while(j<x.length()&&s[k]==x[j]){
                 k++;
                 j++;
             }
             if(j==x.length())
             return i;
             j=0;
         }
     }
     return -1;
}