//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        // ✅💯😏
        if(str1.length()!=str2.length())
        return 0;
        int a[26]={0},b[26]={0};
        for(int i=0;i<str1.length();i++){
            a[str1[i]-'a']=i;
            b[str2[i]-'a']=i;
        }
        for(int i=0;i<str1.length();i++){
            if(a[str1[i]-'a']!=b[str2[i]-'a'])
            return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends