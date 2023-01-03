//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    static bool cmp(string a,string b){
		    //This is completely made by me (Vishu Tyagi)
	        if(a[0]==b[0]){
	            int i=0;
	            while(a[i]==b[i])
	            {
	                i++;
	                if(i<a.size()&&i<b.size()){
	                    continue;
	                }
	                else{
	                    return a.size()<b.size();
	                }
	            }
	            return a[i]<b[i];
	        }
	        else{
	            return a[0]<b[0];
	        }
	    }
		vector<string> AllPossibleStrings(string s)
		{
		    // Code here
		    //Done on my own with my own logic + below algo is learn from GFG
		    int len=s.length();
		    vector<string>v;
		    string st="";
		    long long int p=pow(2,len);
		    for(int i=1;i<p;i++){
		        for(int j=0;j<len;j++){
		            if((i&(1<<j))!=0){
		                st.push_back(s[j]);
		            }
		        }
		        v.push_back(st);
		        st="";
		    }
		    sort(v.begin(),v.end(),cmp);
		    return v;
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
