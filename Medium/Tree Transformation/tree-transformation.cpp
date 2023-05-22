//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int solve(int N, vector<int> p){
        // code here
        // ❌©👀
        // POTD
        unordered_map<int , int> mp;
        for(int i = 1; i < N ; i++){
            mp[p[i]]++;
        }
        int ans ;
        if(mp[0]==1)ans = mp.size()-2;
        else ans = mp.size()-1;
        
        
        if(ans<0)ans = 0;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> p(N);
        for(int i = 0; i < N; i++){
            cin >> p[i];
        }

        Solution obj;
        cout << obj.solve(N, p) << "\n";
    }
}   
// } Driver Code Ends