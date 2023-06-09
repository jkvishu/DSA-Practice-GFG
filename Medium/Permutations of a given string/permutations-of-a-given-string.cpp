//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
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
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    //same as permutation of String free points
		    //Done in first attempt
		    //POTD ✅💯👀
		    vector<string>fans;
		    vector<string>ans;
		    help(ans,S,0);
		    sort(ans.begin(),ans.end());
		    fans.push_back(ans[0]);
		    for(int i=1;i<ans.size();i++){
		        if(ans[i]==ans[i-1]){
		            continue;
		        }
		        fans.push_back(ans[i]);
		    }
		    return fans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends