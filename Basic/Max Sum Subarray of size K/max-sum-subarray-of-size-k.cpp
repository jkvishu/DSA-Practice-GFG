//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N)
    {
        // code here 
        //Basic baccha bhi krdega I have done in 30sec.
        long int sum=0,ans=0;
        int i=0;
        while(i<K){
            ans+=Arr[i];
            i++;
        }
        int j=0;
        sum=ans;
        while(i<N){
            sum-=Arr[j];
            sum+=Arr[i];
            ans=max(ans,sum);
            i++;
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends