//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void find(int i,vector<string>&ans,string st,string s,int n){
	        if(i==n){
	            if(st.length()>0)
	            ans.push_back(st);
	            return;
	        }
	        find(i+1,ans,st+s[i],s,n);
	        find(i+1,ans,st,s,n);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    // POTD 26/02/2024
		    // ✅😏💯
		    vector<string>ans;
		    string st;
		    int n=s.length();
		    find(0,ans,st,s,n);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends