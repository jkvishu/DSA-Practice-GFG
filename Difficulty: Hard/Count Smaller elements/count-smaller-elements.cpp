//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        // ✅💯😏😎
	    //Time taken 0.25 sec. 
	    //Fastest i think so
	    // POTD
	    vector<int>v;
	    vector<int>ans;
	    int n=arr.size();
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
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends