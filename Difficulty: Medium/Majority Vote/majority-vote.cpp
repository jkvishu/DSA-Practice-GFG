//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n=nums.size();
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
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends