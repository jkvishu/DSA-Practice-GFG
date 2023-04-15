//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void find(string str,string &ans,int i,int k){
        if(k==0)
        return;
        char mxch=str[i];
        for(int j=i+1;j<str.size();j++){
            if(str[j]>mxch){
                mxch=str[j];
            }
        }
        if(mxch!=str[i])
        k--;
        for(int j=i;j<str.size();j++){
            if(str[j]==mxch){
                swap(str[j],str[i]);
                if(str.compare(ans)>0)
                ans=str;
                find(str,ans,i+1,k);
                swap(str[i],str[j]);
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       // ✅🤝👀©
       string ans=str;
       find(str,ans,0,k);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}

// } Driver Code Ends