//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        //POTD 7/04/2023
        //✅🤝👀
        int i=0,j=str.length()-1;
        int lst=str.length()-1;
        while(i<=j){
            if(str[i]==str[j]){
                i++;
                j--;
            }
            else{
                i=0;
                lst--;
                j=lst;
            }
        }
        return (str.length()-1-lst);
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends