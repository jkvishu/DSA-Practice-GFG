//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        //This method is fast time taken 0.17 sec
        int res=n;
        while(n>0){
            n=n>>1;
            res^=n;
        }
        return res;
        //Done by my own logic but it's quite slow time taken 0.4 sec.
        /*if(n==0 || n==1)
        return n;
        string st="",kt="";
        int l=1,ans=0;
        while(n){
            if((1&n)!=0){
            st.push_back('1');
        }
        else{
            st.push_back('0');
        }
        n=n>>1;
    }
    kt=st[st.size()-1];
    int prev=st[st.size()-1]-'0';
    for(int i=st.size()-2;i>=0;i--){
        int xr=(st[i]-'0')^prev;
        prev=xr;
        kt+=to_string(xr);
    }
    for(int i=kt.size()-1;i>=0;i--){
        if(kt[i]=='1'){
            ans+=l;
        }
        l=l*2;
    }
    return ans;*/
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends
