//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int maxR=arr[0];
        int n=arr.size();
          int step=arr[0];
          int jump=1;
          
          if(n==1){
              return 0;
          }
          if(arr[0]==0){
              return -1;
          }
          else{
          
            for(int i=1;i<n;i++)
            {
              if(i>=n-1)
              {
                  return jump;
              }
              maxR = max(maxR,arr[i]+i);
              step--;
              if(step==0){
                  jump++;
                  if(i>=maxR){
                      return -1;
                  }
                  
                  step = maxR-i;
              }
          }
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends