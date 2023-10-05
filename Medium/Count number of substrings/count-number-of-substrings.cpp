//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int substrCount (string s, int k) {
    	//code here.
    	//Done in first attempt
    	//POTD
    	//©
    	int n=s.size();
    	vector<int> v1(26,0);
    	vector<int> v2(26,0);
    	int a=-1;
    	int b=-1;
    	int c=-1;
    	int u1=0;
    	int u2=0;
    	long long int ans=0;
    	if(k==1){
    	    while(true){
    	    bool t2=false,t3=false;
    	    while(b<n-1){
    	        t2=true;
    	        b++;
    	        v2[s[b]-'a']++;
    	        if(v2[s[b]-'a']==1) u2++;
    	        if(u2==2){
    	            u2--;
    	            v2[s[b]-'a']--;
    	            b--;
    	            break;
    	        }
    	    }
    	     while(c<b){
    	        if(u2==k)
    	        ans+=(b-c);
    	        t3=true;
    	        c++;
    	        v2[s[c]-'a']--;
    	        if(v2[s[c]-'a']==0) u2--;
    	        if(u2<k){
    	            break;
    	        }
    	    }
    	    if(!t2 && !t3) break;
    	}
    	}else{
    	while(true){
    	    bool t1=false,t2=false,t3=false;
    	    while(a<n-1){
    	        t1=true;
    	        a++;
    	        v1[s[a]-'a']++;
    	        if(v1[s[a]-'a']==1) u1++;
    	        if(u1==k+1){
    	            u1--;
    	            v1[s[a]-'a']--;
    	            a--;
    	            break;
    	        }
    	    }
    	    while(b<a){
    	        t2=true;
    	        b++;
    	        v2[s[b]-'a']++;
    	        if(v2[s[b]-'a']==1) u2++;
    	        if(u2==k){
    	            u2--;
    	            v2[s[b]-'a']--;
    	            b--;
    	            break;
    	        }
    	    }
    	     while(c<b){
    	        if(u1==k && u2==k-1)
    	        ans+=(a-b);
    	        t3=true;
    	        c++;
    	        v2[s[c]-'a']--;
    	        v1[s[c]-'a']--;
    	        if(v2[s[c]-'a']==0) u2--;
    	        if(v1[s[c]-'a']==0) u1--;
    	        if(u1<k || u2<k-1){
    	            break;
    	        }
    	    }
    	    if(!t1 && !t2 && !t3) break;
    	}
    	}
    	return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends