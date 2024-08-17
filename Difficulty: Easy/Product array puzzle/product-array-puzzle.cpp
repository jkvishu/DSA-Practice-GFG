//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        int n=nums.size();
        vector<long long int> p;
        long long int s=nums[0],x;
        int i,k=0;
        for(i=1;i<n;i++)
        {
            if(nums[i]!=0)
            {
               s=s*nums[i]; 
            }
            else
            {
                k=k+1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(k<1)
            {
            x=s/nums[i];
            p.push_back(x);
            }
            else
            {
                if(nums[i]==0&&k==1)
                {
                    p.push_back(s);
                }
                else if(nums[i]!=0&&k==1)
                {
                    p.push_back(0);
                }
                else if(k>1)
                {
                    p.push_back(0);
                }
            }
        }
        return p;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends