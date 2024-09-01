//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxPathSum(vector<int> &A, vector<int> &B) {
        // Code here
        // POTD
        // ✅💯
        int i=0,j=0;
        int l1=A.size();
        int l2=B.size();
        int sum1=0,sum2=0,maxsum=0;
 
        while(l1 > i && l2 > j)
        {
 
            if ((A[i]) < (B[j])) 
            { 
              
              sum1+=A[i];
              i++;
            }
           else if((A[i]) > (B[j]))
           {
             sum2+=B[j];
             j++;
             
           } 
           else 
           {
            maxsum+=max(sum1,sum2)+A[i];
            sum1=0;
            sum2=0;
            i++;
            j++;
           }
        }
        if(l1 > i || l2 > j)
        {
            while(i<=(l1-1))
            {
                
                sum1+=A[i];
                i++;
                
            }
            while(j<=(l2-1))
            {
                
                sum2+=B[j];
                j++;
            }
            maxsum+=max(sum1,sum2);
        }
        return maxsum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }
        vector<int> arr2;
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        long long ans = ob.maxPathSum(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends