//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        //✅🤝💯
        unordered_map<int,int>m;
        int psum=0,c=0;
        for(int i=0;i<N;i++){
            psum+=Arr[i];
            if(psum==k)
            c++;
            if(m.find(psum-k)!=m.end())
            c+=m[psum-k];
            m[psum]++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends