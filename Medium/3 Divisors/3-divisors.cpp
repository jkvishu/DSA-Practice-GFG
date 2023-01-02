//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    bool isPrime(long long n){
        //The concept is that, only the squares of prime numbers, have exactly 3 divisiors. 
        //Therfore the whole concept is based on it.
        //Done by help
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i=5; i*i<=n; i=i+6)
         if (n%i==0 || n%(i+2)==0) return false;
        return true;
    }
    int solve(long long N){
        int count = 0;
        for(long long i=2;i*i<=N;i++){
            if(isPrime(i)) count++;
        }
        return count;
    }
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int>ans;
        for(int i=0;i<q;i++){
          int count = solve(query[i]);
          ans.push_back(count);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends