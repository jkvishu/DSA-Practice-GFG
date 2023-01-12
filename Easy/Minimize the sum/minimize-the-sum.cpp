//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) 
    {
        // code here
        //Done with my own logic in first attempt
        if(N==1)
        return 0;
        if(N==2)
        return arr[0]+arr[1];
        priority_queue<int, vector<int>, greater<int>>p;
        int sum;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            p.push(arr[i]);
        }
        while(p.size()>1){
            sum=p.top();
            p.pop();
            sum=sum+p.top();
            p.pop();
            ans=ans+sum;
            p.push(sum);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends