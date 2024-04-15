//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        // Striver OP
        // ✅😏💯🤝
        unordered_set<string>s;
        queue<pair<string,int>>q;
        q.push({startWord,1});
        for(auto it:wordList){
            s.insert(it);
        }
        s.erase(startWord);
        int ans=0;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int n=it.first.size();
            if(it.first==targetWord)
            return it.second;
            for(int j=0;j<n;j++){
            char c=it.first[j];
            for(int i=0;i<26;i++){
                it.first[j]='a'+i;
                if(s.find(it.first)!=s.end()){
                    q.push({it.first,it.second+1});
                    s.erase(it.first);
                }
            }
            it.first[j]=c;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends