//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    // POTD ✅😂💯 
	    //Easiest Questions you can solve on GFG 😂
	    int i=0,l=S.length()-1;
	    while(i<=l){
	        if(S[i]!=S[l]){
	            return 0;
	        }
	        i++;
	        l--;
	    }
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends