//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	/*
	
	//Recursive way to solve this problem.
	
	void find(int N,string &st,int &ans,int &mod,string str){
	    if(st.length()==N){
	        ans=(ans+1)%mod;
	        return;
	    }
	    for(int i=0;i<2;i++){
	        if(st.empty()){
	        st.push_back(str[i]);
	        find(N,st,ans,mod,str);
	        st.pop_back();
	        }
	        else{
	            if(st.back()=='b'){
	                st.push_back('s');
	                i++;
	                find(N,st,ans,mod,str);
	                st.pop_back();
	            }
	            else{
	                st.push_back(str[i]);
	                find(N,st,ans,mod,str);
	                st.pop_back();
	            }
	        }
	    }
	}
	int TotalWays(int N)
	{
	    // Code here
	    int mod=1e9+7;
	    int ans=0;
	    string st="",str="bs";
	    find(N,st,ans,mod,str);
	    return (ans*ans)%mod;
	}
	*/
	int TotalWays(int N){
	    // Most optimal approach
	    // O(1) space
	    // O(n) time complexity.
	    // POTD
	    // ✅🤝💯😅
	    if(N==1)
	    return 4;
	    if(N==2)
	    return 9;
	    int mod=1e9+7;
	    long long int s1=2,s2=3,ans;
	    for(int i=3;i<=N;i++){
	        ans=(s1+s2)%mod;
	        s1=s2;
	        s2=ans;
	    }
	    return ((ans%mod)*(ans%mod))%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends