//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &A) {
        int n=A.size();
        if(n==1)
      return 0;
      int lm[n],rm[n];
      lm[0]=0;
      rm[n-1]=0;
      int mx,j;
      for(int i=1;i<n;i++){
          if(A[i]==1){
              lm[i]=0;
          }
          else{
              mx=A[i];
              j=i-1;
              while(j>=0&&mx<=A[j]){
                  j--;
              }
              if(j<0){
                  lm[i]=0;
              }
              else{
                  lm[i]=A[j];
              }
          }
      }
      for(int i=n-2;i>=0;i--){
          if(A[i]==1){
              rm[i]=0;
          }
          else{
              mx=A[i];
              j=i+1;
              while(j<n&&mx<=A[j]){
                  j++;
              }
              if(j>=n){
                  rm[i]=0;
              }
              else{
                  rm[i]=A[j];
              }
          }
      }
      mx=0;
      for(int i=0;i<n;i++){
          mx=max(mx,abs(lm[i]-rm[i]));
      }
      return mx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends