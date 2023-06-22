//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &b) {
        // code here
        // POTD ©👀❌
        int count_5 = 0, count_10 = 0;
        
        for(int i=0;i<n;i++){
            if(b[i]==5)
                count_5++;
            else if(b[i]==10){
                if(count_5 == 0) return 0;
                
                count_5--;
                count_10++;
            }
            else{
                if(count_10==0){
                    if(count_5 < 3) return 0;
                    count_5 -= 3;
                }
                else if(count_10!=0 && count_5!=0){
                    count_10--;
                    count_5--;
                }
                else return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends