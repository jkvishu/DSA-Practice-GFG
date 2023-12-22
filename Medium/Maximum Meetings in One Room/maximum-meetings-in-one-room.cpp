//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

struct sos
{
    int start;
    int pos;
    int end;
};
class Solution{
public:
// Done after seeing a yt video editorial.
// But half of the logic was same.
    static bool cmp(struct sos s1,struct sos s2)
    {
        if(s1.end<s2.end)return true;
        else if(s1.end>s2.end)return false;
        else if(s1.pos<s2.pos)return true;
        return false;
    }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F)
    {
        //POTD
        vector<int> v;
        if(N==1)
        {
            v.push_back(1);
            return v;
        }
        struct sos s[N];
        int i,lm;
        for(i=0;i<N;i++)
        {
            s[i].start=S[i];
            s[i].pos=i+1;
            s[i].end=F[i];
        }
        sort(s,s+N,cmp);
        v.push_back(s[0].pos);
        lm=s[0].end;
        for(i=1;i<N;i++)
        {
            if(s[i].start>lm)
            {
                v.push_back(s[i].pos);
                lm=s[i].end;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends