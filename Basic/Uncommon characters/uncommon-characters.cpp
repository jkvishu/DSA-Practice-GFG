//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            // Jood 😏💯✅
            string ans="";
            unordered_set<int>s1;
            unordered_set<int>s2;
            set<char>temp;
            for(int i=0;i<A.length();i++){
                s1.insert(A[i]);
            }
            for(int i=0;i<B.length();i++){
                s2.insert(B[i]);
            }
            for(int i=0;i<A.length();i++){
                if(s2.find(A[i])==s2.end())
                temp.insert(A[i]);
            }
            for(int i=0;i<B.length();i++){
                if(s1.find(B[i])==s1.end())
                temp.insert(B[i]);
            }
            for(auto it:temp){
                ans.push_back(it);
            }
            if(ans.length()>0)
            return ans;
            return "-1";
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends