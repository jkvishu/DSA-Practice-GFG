//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    /*
    Complete brute force soltuion by me But it throws TLE for sure.
    void help(vector<string>&s,string S,int i){
	        if(i==S.length()-1){
	            s.push_back(S);
	            return;
	        }
	        for(int j=i;j<S.length();j++){
	            swap(S[j],S[i]);
	            help(s,S,i+1);
	            swap(S[j],S[i]);
	        }
	    }
    int rank(string S){
        // code here
        // ✅💯
        vector<string>ans;
        string st="";
        int f=0;
        for(int i=1;i<S.length();i++){
            if(S[i]==S[i-1]){
                f=0;
                break;
            }
            f=1;
        }
        if(f==0)
        return 0;
        help(ans,S,0);
        sort(ans.begin(),ans.end());
        for(long long int i=0;i<ans.size();i++){
            if(ans[i]==S)
            return (i+1)%1000003;
        }
        return -1;
    }*/
    int fact(int n){
        int k=n-1;
        while(k){
            n=n*k;
            k--;
        }
        return n;
    }
    int rank(string S){
        //let's see any optimized approach to sovle the problem
        //❌🤝👀😩
        int a[256]={0};
        int n=S.size();
        int m=fact(n),c=0;
        for(int i=0;i<n;i++){
            a[S[i]]++;
            if(a[S[i]]>1)
            return 0;
        }
        for(int i=1;i<256;i++){
            a[i]=a[i]+a[i-1];
        }
        for(int i=0;i<n-1;i++){
            m=m/(n-i);
            c=(c+(a[S[i]-1]*m))%1000003;
            for(int j=S[i];j<256;j++){
                a[j]--;
            }
        }
        return c+1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends