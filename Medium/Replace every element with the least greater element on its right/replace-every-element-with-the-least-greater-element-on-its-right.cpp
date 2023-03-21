//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n)/*{
        //✅😅🙄
        //Brute force approach.
        //This same approach earlier crosses all the test cases when i have solved in 2022
        map<int,int>s;
        vector<int>ans;
        for(int i=0;i<n;i++){
            s[arr[i]]++;
        }
        for(int i=0;i<n-1;i++){
            auto it=s.upper_bound(arr[i]);
            if(it!=s.end())
            ans.push_back(it->first);
            else
            ans.push_back(-1);
            s[arr[i]]--;
            if(s[arr[i]]==0)
            s.erase(arr[i]);
        }
        ans.push_back(-1);
        return ans;
    }*/
    {
        //Now the constraints may be changed and now we have to design the best option.
        //✅🤝💯
        set<int>s;
        for(int i=n-1;i>=0;i--){
            s.insert(arr[i]);
            auto it=s.upper_bound(arr[i]);
            if(it!=s.end())
            arr[i]=(*it);
            else
            arr[i]=-1;
        }
        return arr;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends