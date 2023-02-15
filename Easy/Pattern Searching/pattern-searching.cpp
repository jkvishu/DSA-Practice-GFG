//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int search(string text, string pat){
	    //✅💯
	    int n=text.length();
	    int m=pat.length();
	    if(m>n)
	    return 0;
	    int i=0,j=0;
	    while(i<n){
	        if(text[i]==pat[j]){
	            int k=i;
	            while(k<n&&j<m&&text[k]==pat[j]){
	                k++;
	                j++;
	            }
	            if(j==m)
	            return 1;
	            else
	            j=0;
	            i++;
	        }
	        else
	        i++;
	    }
	    return 0;
	}
/*	{
	    // Your code goes here
	    // ✅💯
	    //I don't know why this code is not working although it is giving correct output for all test cases.
	    int p=pat.length();
        for(int i=0;i<text.length()-p;i++){
        if(text.substr(i,p)==pat)
        return 1;
        }
        return 0;
	}*/
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
   		string x, y;
   		cin >> x >> y;



        Solution ob;
   		cout << ob.search(x, y) << "\n";
   	}

    return 0;
}
// } Driver Code Ends