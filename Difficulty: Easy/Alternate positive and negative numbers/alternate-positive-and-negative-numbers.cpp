//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        int n=arr.size();
         vector<int> v;
	    vector<int> c;
	    int i,x,k=0,first;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            v.push_back(arr[i]);
	        }
	        else
	        {
	            c.push_back(arr[i]);
	        }
	    }
	    i=0;
	    auto it1=c.begin();
	    auto it2=v.begin();
	    while(it1!=c.end()&&it2!=v.end())
	    {
	        arr[i++]=(*it1);
	        it1++;
	        arr[i++]=(*it2);
	        it2++;
	    }
	    while(it1!=c.end())
	    {
	        arr[i++]=(*it1);
	        it1++;
	    }
	    while(it2!=v.end())
	    {
	        arr[i++]=(*it2);
	        it2++;
	    }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends