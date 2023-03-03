//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<long long int> minimumSquares(long long int l, long long int b)
    {
        // code here
        // ❌👀©
        vector<long long int>ans;
        if(b%l==0)
        {
          ans.push_back(b/l);
          ans.push_back(l);
        } 
        else if(l%b==0)
        {
          ans.push_back(l/b);
          ans.push_back(b);
        }
        else
        {
            long long int x=l;
            long long int y=b;
          while(b!=0)
        {
              long long int  temp=b;
                b=l%b;
                l=temp;
        }
       long long int hcf=l;
       ans.push_back((x*y/hcf)/hcf);
       ans.push_back(hcf);
    }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int L, B;
        cin>>L>>B;
        
        Solution ob;
        vector<long long int> ans = ob.minimumSquares(L, B);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends