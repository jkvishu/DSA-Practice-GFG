//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        int n=arr.size();
        if(n==1)
        return 0;
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        long long cal,ans=0;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        while(pq.size()!=1){
            cal=pq.top();
            pq.pop();
            cal+=pq.top();
            pq.pop();
            ans+=cal;
            pq.push(cal);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends