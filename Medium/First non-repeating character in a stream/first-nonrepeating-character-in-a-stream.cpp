//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    // Papa bolte bete 
		    // ✅💯😏
		    string ans="";
		    ans.push_back(A[0]);
		    int a[26]={0};
		    queue<char>q;
		    a[A[0]-'a']++;
		    q.push(A[0]);
		    for(int i=1;i<A.length();i++){
		        a[A[i]-'a']++;
		        if(a[A[i]-'a']==1){
		        q.push(A[i]);
		        }
		        if(a[q.front()-'a']>1){
		            while(!q.empty()&&a[q.front()-'a']>1){
		                q.pop();
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		        else{
		            ans.push_back(q.front());
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