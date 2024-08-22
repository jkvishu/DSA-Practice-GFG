//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int node, vector<int> adj[], vector<bool> &vis, stack<char> &s)
    {
    vis[node] = 1;
    for (auto x : adj[node])
    {
        if (!vis[x])
        {
            dfs(x, adj, vis, s);
        }
    }
    s.push('a'+node);
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        // STriver The jood
        // ✅😏💯
        vector<int>adj[K];
        for(int i=0;i<N-1;i++){
            string s1=dict[i];
            string s2=dict[i+1];
            int j=0,k=0;
            while(j<s1.size()&&k<s2.size()){
                if(s1[j]!=s2[k]){
                    adj[s1[j]-'a'].push_back(s2[k]-'a');
                    break;
                }
                j++;
                k++;
            }
        }
        string ans="";
        stack<char> s;
        vector<bool> vis(K, 0);
        for (int i = 0; i < K; i++)
        {
        if (!vis[i])
        {
            dfs(i, adj, vis, s);
        }
        }
        while (!s.empty())
        {
        ans.push_back(s.top());
        s.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.
string order;

bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size())
        return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++)
            cin >> dict[i];

        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++)
            order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i])
                f = false;

        if (f)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends