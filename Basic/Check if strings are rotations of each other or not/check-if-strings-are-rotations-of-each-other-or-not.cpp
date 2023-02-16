//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        //💯✅
        if(s1.length()!=s2.length())
        return 0;
        int j=0,k,l;
        while(j<s2.length()){
            if(s1[0]==s2[j]){
                k=0;
                l=j;
                while(k<s1.length()&&s1[k]==s2[l]){
                    l=(l+1)%s2.length();
                    k++;
                }
                if(k==s1.length())
                return 1;
            }
            j++;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends