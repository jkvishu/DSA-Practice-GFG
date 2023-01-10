//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr)
    {
        // code here
        //done in first attempt wiht my own logic in 0.04 sec
        int i,n=arr.length();
        string st="";
        char ch='a';
        int a[26]={0};
        for(i=0;i<n;i++)
        {
            a[arr[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
                while(a[i]>0)
                {
                    st.push_back(ch);
                    a[i]--;
                }
            ch++;
        }
        return st;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends