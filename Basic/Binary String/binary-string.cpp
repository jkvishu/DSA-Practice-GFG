//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        // Your code here
        // ✅😏💯
        int c=-1,ans=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]=='1'){
                c++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                ans+=c;
                c--;
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}

// } Driver Code Ends