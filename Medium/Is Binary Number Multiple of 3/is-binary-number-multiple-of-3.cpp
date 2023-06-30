//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    //✅💯😏🤝
	    long long int ck=1;
	    long long int sum=0;
	    for(int i=s.length()-1;i>=0;i--){
	        if(s[i]=='1'){
	            sum+=ck;
	        }
	        ck=(ck*2)%3;
	    }
	    if(sum%3==0)
	    return 1;
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