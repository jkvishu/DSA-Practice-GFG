//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
            //Rabin-Karp Algorithm 
            //❌🥵👌🏻👀
            vector<int>ans;
            int d=256;
            int m=pat.length();
            int n=txt.length();
            int h=1,q=INT_MAX,j;
            for(int i=0;i<m-1;i++){
                h=(h*d)%q;
            }
            int p=0,t=0;
            for(int i=0;i<m;i++){
                p=(p*d+pat[i])%q;
                t=(t*d+txt[i])&q;
            }
            for(int i=0;i<=n-m;i++){
                if(p==t){
                    for(j=0;j<m;j++){
                        if(txt[i+j]!=pat[j]){
                        break;
                        }
                    }
                    if(j==m)
                    ans.push_back(i+1);
                }
                if(i<n-m){
                    t=(d*(t-txt[i]*h)+txt[i+m])%q;
                    if(t<0)
                    t=t+q;
                }
            }
            if(ans.size()==0)
            return {-1};
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends