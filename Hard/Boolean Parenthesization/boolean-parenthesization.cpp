//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
/*
    int find(string &s, int i, int j, bool isTrue){
        if(i > j) return 0; //If there are no elements then return 0
        
        //Base case, if there is only one element
        if(i == j){
            if(isTrue) return s[i] == 'T';
            else return s[i] == 'F';
        }
        
        int ans = 0;
        
        // All possibilities for getting true and false as well
        for(int k=i+1;k<=j-1;k+=2){
            int LT = find(s, i, k-1, true);
            int LF = find(s, i, k-1, false);
            int RT = find(s, k+1, j, true);
            int RF = find(s, k+1, j, false);
            
            if(s[k] == '&'){
                if(isTrue) ans += LT*RT; //'AND' operation for getting 'True' as answer
                else ans += LF*RF + LF*RT + LT*RF; //'AND' operation for getting 'False' as answer
            }
            
            else if(s[k] == '|'){
                if(isTrue) ans += LT*RT + LT*RF + LF*RT; //'OR' operation for getting 'True' as answer
                else ans += LF*RF; //'OR' operation for getting 'False' as answer
            }
            
            else if(s[k] = '^'){
                if(isTrue) ans += LT*RF + LF*RT; //'XOR' operation for getting 'True' as answer
                else ans += LT*RT + LF*RF; //'XOR' operation for getting 'False' as answer
            }
        }
        
        return ans%1003;
    }
    
    int countWays(int N, string S){
        // Recursive Solution
        // ✅😏💯
        // TLE
        return find(S, 0, N-1, true);
    }
    */
    int find(string &s, int i, int j, bool isTrue,vector<vector<vector<int>>>&dp){
        if(i > j) return 0; //If there are no elements then return 0
        
        //Base case, if there is only one element
        if(i == j){
            if(isTrue) return s[i] == 'T';
            else return s[i] == 'F';
        }
        
        int ans = 0;
        if(dp[i][j][isTrue]!=-1)
        return dp[i][j][isTrue];
        
        // All possibilities for getting true and false as well
        for(int k=i+1;k<=j-1;k+=2){
            int LT = find(s, i, k-1, true,dp);
            int LF = find(s, i, k-1, false,dp);
            int RT = find(s, k+1, j, true,dp);
            int RF = find(s, k+1, j, false,dp);
            
            if(s[k] == '&'){
                if(isTrue) ans += LT*RT; //'AND' operation for getting 'True' as answer
                else ans += LF*RF + LF*RT + LT*RF; //'AND' operation for getting 'False' as answer
            }
            
            else if(s[k] == '|'){
                if(isTrue) ans += LT*RT + LT*RF + LF*RT; //'OR' operation for getting 'True' as answer
                else ans += LF*RF; //'OR' operation for getting 'False' as answer
            }
            
            else if(s[k] = '^'){
                if(isTrue) ans += LT*RF + LF*RT; //'XOR' operation for getting 'True' as answer
                else ans += LT*RT + LF*RF; //'XOR' operation for getting 'False' as answer
            }
        }
        
        return dp[i][j][isTrue]=ans%1003;
    }
    
    int countWays(int N, string S){
        // Memoization solution for the problem.
        // ✅😏💯
        vector<vector<vector<int>>>dp(N+1,vector<vector<int>>(N+1,vector<int>(2,-1)));
        return find(S, 0, N-1, true,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.countWays(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends