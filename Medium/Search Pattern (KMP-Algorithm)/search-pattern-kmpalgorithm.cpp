//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
       void fill_lcs(string p,int arr[]){
        arr[0]=0;
        int l=0;
        int i=1;
        while(i<p.length()){
            if(p[i]==p[l]){
                arr[i]=l+1;
                l++;
                i++;
            }
            else{
                if(l==0){
                    arr[i]=0;
                    i++;
                }
                else{
                    l=0;
                }
            }
        }
    }
        vector <int> search(string pat, string txt)
        {
            //code here.
            //❌🤝👀
            //POTD
            vector<int>ans;
            int m=pat.length();
            int n=txt.length();
            int lcs[m];
            fill_lcs(pat,lcs);
            int i=0,j=0;
            while(i<n){
                if(pat[j]==txt[i]){
                    i++;
                    j++;
                }
                if(j==m){
                    ans.push_back(i-j+1);
                    j=lcs[j-1];
                }
                else if(i<n&&pat[j]!=txt[i]){
                    if(j==0)
                    i++;
                    else
                    j=lcs[j-1];
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
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends