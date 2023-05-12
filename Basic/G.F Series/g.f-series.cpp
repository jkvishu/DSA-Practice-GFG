//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   void helper(int N, long long int* output)
{
    if(N==2)
    {
     cout<<output[N-2]<<" "<<output[N-1]<<" ";
     return;
    }

    helper(N-1, output);
    output[N-1]=output[N-3]*output[N-3]-output[N-2];
    cout<<output[N-1]<<" ";
    return;

    
}
    void gfSeries(int N)
    {
        // Write Your Code here
        // 👽❌
        long long int output[N];
        output[0]=0;
        output[1]=1;
    helper(N, output);
    cout<<endl;
 
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
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends