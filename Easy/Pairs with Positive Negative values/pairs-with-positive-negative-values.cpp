//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int arr[], int n) {
        // code here
        // ✅💯
        vector<int>ans;
        vector<pair<int,int>>v;
        unordered_map<int,int>s;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            continue;
            if(s.find((-1*arr[i]))!=s.end())
            {
                if(arr[i]<0){
                v.push_back({(-1*arr[i]),arr[i]});
                }
                else{
                v.push_back({arr[i],(-1*arr[i])});
                }
                s[(-1*arr[i])]--;
                if(s[(-1*arr[i])]<=0)
                s.erase((-1*arr[i]));
                s[arr[i]]--;
                if(s[arr[i]]<=0)
                s.erase(arr[i]);
            }
            else
            s[arr[i]]++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i].second);
            ans.push_back(v[i].first);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends