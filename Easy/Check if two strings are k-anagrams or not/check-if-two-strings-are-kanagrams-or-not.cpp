//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        // ❌👀
        if(str1.length()!=str2.length())
        return 0;
            int a[26]={0},c=0;
            for(int i=0;i<str1.length();i++){
                a[str1[i]-'a']++;
            }
            for(int i=0;i<str2.length();i++){
                if(a[str2[i]-'a']>0){
                    a[str2[i]-'a']--;
                }
                else
                c++;
            }
            if(c>k)
            return 0;
            return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends