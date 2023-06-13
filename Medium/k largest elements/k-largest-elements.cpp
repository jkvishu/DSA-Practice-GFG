//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    // POTD ✅😏💯
	    // I have already solved this question with brute force earlier
	    // Now again solving optimaly when it comes in potd
	    priority_queue<int,vector<int>,greater<int>>pq;
	    for(int i=0;i<k;i++){
	        pq.push(arr[i]);
	    }
	    for(int i=k;i<n;i++){
	        if(arr[i]>pq.top()){
	            pq.pop();
	            pq.push(arr[i]);
	        }
	    }
	    vector<int>ans(k);
	    for(int i=k-1;i>=0;i--){
	        ans[i]=pq.top();
	        pq.pop();
	    }
	    return ans;
	}
	/*
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    // code here
        // ✅💯😏 BRute force approach
        // Time taken 0.58 sec
        priority_queue<int>pq;
        vector<int>ans;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int i=0;
        while(i<k&&!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
            i++;
        }
        return ans;
	}
	*/
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
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends