//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) 
    {
        vector <int> r;
        int h,k=0,i;
        h=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>h)
            {
                h=arr[i];
            }
        }
        h=h+1;
        int a[h];
        for(i=0;i<h;i++)
        {
            a[i]=0;
        }
        for(i=0;i<n;i++)
        {
            a[arr[i]]=a[arr[i]]+1;
        }
        for(i=0;i<h;i++)
        {
            if(a[i]>1)
            {
                r.push_back(i);
                k=1;
            }
        }
        if(k==1)
        {
            return r;
        }
        else
        {
            r.push_back(-1);
            return r;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends