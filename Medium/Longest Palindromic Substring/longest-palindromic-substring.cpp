//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool check(string st){
        int i=0,h=st.length()-1;
        while(i<=h){
            if(st[i]!=st[h])
            return false;
            i++;
            h--;
        }
        return true;
    }
    string longestPalindrome(string s){
        // code here
        // Brute force
        // Don't know how it's accepted
        // 🫠
        int n=s.length();
        string fans="";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string st=s.substr(i,j-i+1);
                if((st.length())>(fans.length())){
                if(check(st))
                fans=st;
                }
            }
        }
        return fans;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends