//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int DivisibleByEight(string S){
        //code here
        //✅🤝💯😏
        int n=S.length();
        if(n==2){
            int nm=stoi(S);
            if(!(nm%8))
            return 1;
            return -1;
        }
        int lastdigit=(int)(S[n-1])-48;
        int second_lastdigit=(int)(S[n-2])-48;
        int Third_lastdigit=(int)(S[n-3])-48;
        int nm= Third_lastdigit*100+second_lastdigit*10+lastdigit;
        return nm%8?-1:1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends