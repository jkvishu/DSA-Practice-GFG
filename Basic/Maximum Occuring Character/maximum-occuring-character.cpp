//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        //✅💯🥱
        int a[26]={0};
        int mx=1;
        char ans=str[0];
        a[str[0]-'a']++;
        for(int i=1;i<str.length();i++){
            a[str[i]-'a']++;
            if(a[str[i]-'a']>mx){
                mx=a[str[i]-'a'];
                ans=str[i];
            }
            else if(a[str[i]-'a']==mx){
                ans=min(ans,str[i]);
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends