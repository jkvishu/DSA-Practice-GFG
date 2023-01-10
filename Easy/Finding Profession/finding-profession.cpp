//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    char profession(int level, int pos){
        // code here
        //Done after taking an idea from a yt editorial
        //Based on the head recursion concept and the recursion call will work for us in which we will use the concept for the asked pos, if it's parent will be an enginer or the doctor ,using this information we can conclude that if the asked node is odd and its parent is e than return e else return d and vice versa
        //Generate tree for understanding the concept clearly.
        //Done by vishu tyagi
        if(pos==1)
        return 'e';
        if(profession(level-1,(pos+1)/2)=='e')
        {
            if(pos%2==1)
            return 'e';
            else
            return 'd';
        }
        else{
            if(pos%2==1)
            return 'd';
            else
            return 'e';
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}
// } Driver Code Ends