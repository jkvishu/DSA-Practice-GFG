//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        //Done in first attempt after learning from GFG course
        long long int res=0,nw=0,k=0;
        vector<long long int>v;
        for(int i=0;i<N;i++){
            res=res^Arr[i];
        }
        res=(res&(~(res-1)));
        for(int i=0;i<N;i++){
            if((res&Arr[i])!=0){
                nw=nw^Arr[i];
            }
            else{
                k=k^Arr[i];
            }
        }
        v.push_back(max(nw,k));
        v.push_back(min(nw,k));
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends