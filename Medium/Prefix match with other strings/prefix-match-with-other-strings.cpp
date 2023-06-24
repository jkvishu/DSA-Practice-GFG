//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    bool check(string st,string ck,int k){
        int i=0;
        while(i<k&&i<st.length()){
            if(st[i]!=ck[i])
            return false;
            i++;
        }
        if(i>=k)
        return true;
        return false;
    }
    int klengthpref(string arr[], int n, int k, string str){  
        // Complete brute force approach.
        // POTD ✅😏💯
        if(k>str.length())
        return 0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(check(arr[i],str,k))
            ans++;
        }
        return ans;
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
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends