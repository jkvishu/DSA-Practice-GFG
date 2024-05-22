//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int K) {
        // Code here
         //👀❌
         //POTD
    int n = stations.size();
    
    double left = 0.0, right = stations[n-1] - stations[0];

    while (right - left > 1e-9) {
        double mid = (left + right) / 2;
        int requiredStations = 0;

        for (int i = 0; i < n - 1; i++) {
            requiredStations += int((stations[i + 1] - stations[i]) / mid); 
        }

        if (requiredStations <= K) {
            right = mid;
        } else {
            left = mid;
        }
    }

    return right; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
    }
    return 0;
}
// } Driver Code Ends