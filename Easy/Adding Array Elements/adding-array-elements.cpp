//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        //Done in first attempt with my own logic.
        priority_queue <int, vector<int>, greater<int>>p;
        for(int i=0;i<n;i++){
            p.push(arr[i]);
        }
        int ans=0,x,y;
        if(p.top()>=k)
        return 0;
        while(p.size()!=1){
            x=p.top();
            p.pop();
            y=p.top();
            p.pop();
            p.push(x+y);
            ans++;
            if(p.top()>=k)
            return ans;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends