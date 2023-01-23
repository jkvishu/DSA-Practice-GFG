//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) 
    {
        // Code here
        //Done in first attempt with my own logic.
        int i,j=0,mx=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
            {
            mx=max(mx,i-j);
            continue;
            }
            else{
                c++;
                if(c>k){
                    while(c>k&&j<i){
                        if(nums[j]==0){
                            c--;
                        }
                        j++;
                    }
                }
                mx=max(mx,i-j);
            }
        }
        return mx+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends