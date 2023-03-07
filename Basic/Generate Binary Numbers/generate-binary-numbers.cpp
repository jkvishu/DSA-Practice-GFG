//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	// ✅💯😏
	if(N==1)
	return {"1"};
	vector<string>ans;
	queue<string>q;
	q.push("1");
	for(int i=2;i<=N;i++){
	    string st=q.front();
	    ans.push_back(q.front());
	    q.pop();
	    q.push(st+"0");
	    i++;
	    if(i<=N)
	    q.push(st+"1");
	}
	while(!q.empty()){
	    ans.push_back(q.front());
	    q.pop();
	}
	return ans;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends