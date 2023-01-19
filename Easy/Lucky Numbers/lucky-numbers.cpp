//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
bool isLucky(int n) 
{
    //Iterative version for the same question.
    if(n<2)
    return true;
    for(int i=2;i<=n;i++){
        if(i>n)
        return true;
        if(n%i==0)
        return false;
        n=n-(n/i);
    }
    return true;
}
     /*bool help(int n,int counter){
        if(counter >n)
         return true;
        if(n%counter==0)
         return false;
        n= n-(n/counter);
        return help(n,counter+1); 
   }
    bool isLucky(int n) {
        // code here
        return help(n,2);
    }*/
};

//{ Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}
// } Driver Code Ends