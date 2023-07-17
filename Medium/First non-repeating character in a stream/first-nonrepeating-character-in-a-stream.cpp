//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    // POTD ✅💯😏
		    int a[26]={0};
		    string ans="";
		    queue<char>q;
		    for(int i=0;i<A.length();i++){
		        if(a[A[i]-'a']==0){
		            if(!q.empty())
		            ans.push_back(q.front());
		            else{
		                ans.push_back(A[i]);
		            }
		            q.push(A[i]);
		            a[A[i]-'a']++;
		        }
		        else{
		            a[A[i]-'a']++;
		            while(!q.empty()&&a[q.front()-'a']>1){
		                q.pop();
		            }
		            if(!q.empty())
		            ans.push_back(q.front());
		            else
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends