//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        //Moore's majority voting algorithm is very important.
        //Complete helped cypste
        vector<int>v;
        int i,c1=0,c2=0,x=INT_MAX,y=INT_MAX;
        for(i=0;i<n;i++){
            if(nums[i]==x)
            c1++;
            else if(nums[i]==y)
            c2++;
            else if(c1==0)
            {
                c1=1;
                x=nums[i];
            }
            else if(c2==0)
            {
                c2=1;
                y=nums[i];
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(i=0;i<n;i++){
            if(nums[i]==x)
            c1++;
            else if(nums[i]==y)
            c2++;
        }
        if(c1>n/3)
        v.push_back(x);
        if(c2>n/3)
        v.push_back(y);
        if(v.size()==0)
        return {-1};
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends