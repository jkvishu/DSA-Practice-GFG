//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S)
    {
        //Second time when i came to solve this problem hahaha very easy
        //✅💯😏
    int a[26]={0},ans=0,j=0;
    for(int i=0;i<S.length();i++){
        a[S[i]-'a']++;
        if(a[S[i]-'a']==1){
            ans=max(ans,i-j+1);
        }
        else{
            while(j<i&&a[S[i]-'a']>1){
                a[S[j]-'a']--;
                j++;
            }
        }
    }
    return ans;
    }
    /*{
        //code
        //Done in fourth attempt with my own logic in 0.27 sec
        //3 attempt wasted because of margin errors.
        //In this question we have to take care of two things that a -a will be zero and our if condition is for zero hence it must be +1 also when if conditon fails than we havr to put our i back to the character for which we losse hence understand the code properly.
        int a[26]={0};
        int i,n=S.length(),c=0,mx=0;
        for(i=0;i<n;i++)
        {
            if(a[S[i]-'a']==0)
            {
                c++;
                a[S[i]-'a']=i+1;
            }
            else
            {
                mx=max(mx,c);
                c=0;
                i=a[S[i]-'a']-1;
                fill(a,a+26,0);
            }
        }
        mx=max(mx,c);
        return mx;
    }*/
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends