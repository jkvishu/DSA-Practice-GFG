//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        // ©👀©❌😕
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n,0);
        stack<int> t;
        for(int i=0;i<n;i++)
        {
            while(!t.empty()&&arr[t.top()]>=arr[i])t.pop();
            if(t.empty())left[i]=-1;
            else left[i]=t.top();
            t.push(i);
        }
        while(!t.empty())t.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!t.empty()&&arr[t.top()]>=arr[i])t.pop();
            if(t.empty())right[i]=n;
            else right[i]=t.top();
            t.push(i);
        }
        for(int i=0;i<n;i++)
        right[i]=right[i]-left[i]-1;
        for(int i=0;i<n;i++)
        ans[right[i]-1]=max(ans[right[i]-1],arr[i]);
        for(int i=n-2;i>=0;i--)
        {
            if(ans[i]<ans[i+1])
            ans[i]=ans[i+1];
        }
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends