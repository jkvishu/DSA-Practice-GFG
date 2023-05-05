//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool help(int n,int cnt,int w,vector<int> &a, vector<vector<vector<int>>> &dp)
    {
        if(w==0)//if the amount becomes zero then check whether we made the required amt using k coins or not
        {
            if(cnt ==0)
             return true;
            else
             return false;
        }
        if(n==0 || cnt ==0)//if anytime there are no coins or we exceed the coins limit then return false
         return false;
        if(dp[n][cnt][w]!=-1)
         return dp[n][cnt][w];
        else
        {
            if(a[n-1]<=w)//if the current coin value is less than or equal to remaining amt then uh have 2 choices
            {
                //1->take the coins 2->skip that coin
                bool take=help(n,cnt-1,w-a[n-1],a,dp);
                bool notake=help(n-1,cnt,w,a,dp);
                return dp[n][cnt][w]=take || notake;
            }
            else//if the current coin is greater than the remaining amt then we cant take it so skip it
             return dp[n][cnt][w]=help(n-1,cnt,w,a,dp);
        }
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        vector<vector<vector<int>>> dp(N+1,vector<vector<int>>(K+1,vector<int>(target+1,-1)));
        return help(N,K,target,coins,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends