//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        //Done by me on my own
        vector<bool>v(N+1,true);
        vector<int>ans;
        int i=2,j;
        while(i*i<=N){
            if(v[i]){
                for(j=i*i;j<=N;j=j+i){
                    v[j]=false;
                }
            }
            i=i+1;
        }
        for(i=2;i<v.size();i++){
            if(v[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends