//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    //Intiall logic of mine was very close but the changes that i learned from editorial were very crucial
	    int count1=0,count2=0,i;
	    for(i=0;i<s.length();i++){
	        int j=s[i]-'0';
	        if(i%2==0){
	            count2+=j;
	        }
	        else
	        {
	            count1+=j;
	        }
	    }
	    if(abs(count2-count1)%3==0)
	    return 1;
	    else
	    return 0;
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
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends