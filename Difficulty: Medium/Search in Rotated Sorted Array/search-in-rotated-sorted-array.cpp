//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  /*
  
        //complete the function here
        //Modified BS ✅💯
        while(l<=h){
            int m=(l+h)/2;
            if(A[m]==k)
            return m;
            else if(A[m]>=A[l]){
                if(k<=A[m]&&k>=A[l]){
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                if(k>=A[m]&&k<=A[h]){
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
        }
        return -1;
  */
    int search(vector<int>& arr, int key) {
        // complete the function here
        //POTD
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends