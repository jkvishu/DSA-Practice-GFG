//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    // ✅💯😏😎
	    vector<int>v;
	    vector<int>ans;
	    int size=n-1;
	    for(int i=0;i<n;i++){
	        v.push_back(arr[i]);
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<n-1;i++){
	        int l=0;
	        int h=size,m;
	        while(l<=h){
	            m=l+(h-l)/2;
	            if(arr[i]<=v[m]){
	                h=m-1;
	            }
	            else if(arr[i]>v[m]){
	                l=m+1;
	            }
	            else{
	                break;
	            }
	        }
	        while(m>=0&&v[m]==arr[i]){
	            m--;
	        }
	        m++;
	        ans.push_back(size-(size-m));
	        v.erase(v.begin()+m);
	        size--;
	    }
	    ans.push_back(0);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends