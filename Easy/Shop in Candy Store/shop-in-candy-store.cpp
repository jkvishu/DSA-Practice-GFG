//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        // Write Your Code here
        // 💯❌👀©
        sort(candies,candies+N);
        int ma=0,mi=0,b1=N-1,b2=0,f1=0,f2=N-1;
        while(b1>=f1){
            ma+=candies[b1--];
            f1+=k;
        }
        while(b2<=f2){
            mi+=candies[b2++];
            f2-=k;
        }
        return {mi,ma};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends