//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        // Striver OP
        // ✅😏💯
        vector<int>dis(100000,1e9);
        queue<pair<int,int>>q;
        q.push({start,0});
        dis[start]=0;
        int mod=1e5;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            if(it.first==end)
            return it.second;
            for(auto x:arr){
                int num=(x*it.first)%mod;
                if(it.second+1<dis[num]){
                    dis[num]=it.second+1;
                    q.push({num,dis[num]});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends