//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        // POTD
        sort(arr.begin(),arr.end());
        int n,i,ans=INT_MAX,l,h,x;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            l=0;
            h=n-1;
            x=arr[i];
            while(h>l)
            {
                if(i==l)
                {
                    l++;
                    continue;
                }
                if(i==h)
                {
                    h--;
                    continue;
                }
                if(x+arr[l]+arr[h]==target)
                {
                    return target;
                }
                if(abs(target-ans)>abs(target-(x+arr[l]+arr[h])))
                {
                    ans=x+arr[l]+arr[h];
                }
                else if(abs(target-(x+arr[l]+arr[h]))==abs(target-ans))
                {
                    ans=max(ans,x+arr[l]+arr[h]);
                }
                if(x+arr[l]+arr[h]>target)
                {
                    h--;
                }
                else
                {
                    l++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends