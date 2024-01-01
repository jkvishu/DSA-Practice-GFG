//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        /*
        Based on this logic
        if
        (x+y)%k=0;
        then
        x%k+y%k=k;
        hence
        x%k=k-y%k;
        when u find equal pairs for them then it is possible otherwise not possible
        */
        
        //POTD
        //✅🤝💯
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]%k]++;
        }
        if(m[0]%2==1)
        return 0;
        for(int i=1;i<k;i++){
            if(m[i]!=m[k-i])
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends