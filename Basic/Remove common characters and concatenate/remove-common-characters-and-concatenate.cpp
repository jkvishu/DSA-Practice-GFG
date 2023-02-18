//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        // ✅😏💯
        int a[26]={0},b[26]={0};
        string ans="";
        for(int i=0;i<s1.length();i++){
            a[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            b[s2[i]-'a']++;
        }
        for(int i=0;i<s1.length();i++){
            if(b[s1[i]-'a']==0)
            ans.push_back(s1[i]);
        }
        for(int i=0;i<s2.length();i++){
            if(a[s2[i]-'a']==0)
            ans.push_back(s2[i]);
        }
        if(ans.size()==0)
        return "-1";
        return ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends