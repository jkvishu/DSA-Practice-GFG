//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
         int n=arr1.size(),m=arr2.size();
        int i=0,j=0;
        if(k==n+m)
        return max(arr1[n-1],arr2[m-1]);
        if(k==1)
        return min(arr1[0],arr2[0]);
        while(i<n && j<m && k>1)
        {
            if(arr1[i]<=arr2[j])
            {
                i++;
                k--;
            }
            else
            {
                j++;
                k--;
            }
        }
        while(i<n && k>1)
        {
            i++;
            k--;
        }
        while(j<m && k>1)
        {
            j++;
            k--;
        }
        if(i==n)
        return arr2[j];
        else if(j==m)
        return arr1[i];
        return min(arr1[i],arr2[j]);
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends