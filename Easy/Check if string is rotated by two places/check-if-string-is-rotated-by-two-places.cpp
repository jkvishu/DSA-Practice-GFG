//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        // ✅💯😏
        if(str1.length()!=str2.length())
        return 0;
        if(str1.length()==1){
        if(str1==str2)
        return 1;
        else
        return 0;
        }
        if(str1.length()==2)
        return (str1==str2);
        string st1="",st2="";
        st1=str1.substr(2,str1.length()-2)+str1.substr(0,2);
        if(st1==str2)
        return 1;
        st2=str1.substr(str1.length()-2,2)+str1.substr(0,str1.length()-2);
        if(st2==str2)
        return 1;
        return 0;
        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends