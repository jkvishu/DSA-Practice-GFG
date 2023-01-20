//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        //Done in first attempt with my own logic.
        string st="";
        int j=0;
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122){
                st.push_back(str[i]);
            }
        }
        if(st.length()!=0){
        for(int i=0;i<str.length();i++){
            if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122){
                str[i]=st[j++];
            }
        }
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends