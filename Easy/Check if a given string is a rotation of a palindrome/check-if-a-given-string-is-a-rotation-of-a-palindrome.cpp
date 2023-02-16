//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool check(string s){
	    int i=0,j=s.length()-1,f=0;
	    while(i<j){
	        if(s[i]!=s[j]){
	        f=1;
	        break;
	        }
	        i++;
	        j--;
	    }
	    if(f==0)
	    return 1;
	    else
	    return 0;
	}
	int isRotatedPalindrome(string s)
	{
	    //second naive solution 
	    if(check(s))
	    return 1;
	    string st="";
	    for(int i=1;i<s.length();i++){
	        st=s.substr(i,s.length()-i)+s.substr(0,i);
	        if(check(st))
	        return 1;
	    }
	    return 0;
	}
	/*{
	    // code here
	    // ✅💯
	    // First naive solution for the problem.
	    string ch=s;
	    reverse(ch.begin(),ch.end());
	    if(s==ch)
	    return 1;
	    string st=s,k="";
	    for(int i=1;i<s.length();i++){
	        st=s.substr(i,s.length()-i)+s.substr(0,i);
	        k=st;
	        reverse(k.begin(),k.end());
	        if(st==k)
	        return 1;
	    }
	    for(int i=s.length()-1;i>0;i--){
	        st=s.substr(i,s.length()-i)+s.substr(0,i);
	        k=st;
	        reverse(k.begin(),k.end());
	        if(st==k)
	        return 1;
	    }
	    return 0;
	}*/
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isRotatedPalindrome(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends