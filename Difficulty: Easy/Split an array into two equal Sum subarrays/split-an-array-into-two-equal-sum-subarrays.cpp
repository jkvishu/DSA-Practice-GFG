//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        // POTD
        int sum=0;
        for(int i=0;i<arr.size();i++)
         {
             sum+=arr[i];
         }
         if(sum%2==1)
          return false;
         int ans=sum/2;
         int count=0;
         int i=0;
         while(count<=ans)
          {
              if(count==ans)
               return true;
               else
               {
                   count+=arr[i];
               }
               i++;
          }
          return false;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends