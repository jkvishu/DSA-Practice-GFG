//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        //This solution is working correct but tracing it tree is quite complex
        //And how the fuck is this question in basic 
        //Done by editorial
        //They sort on their own we don't need to sort
        if(N==0){
            return {0};
        }
        vector<int>prev=subsetSums(arr,N-1);
        int n=prev.size();
        for(int i=0;i<n;i++){
            prev.push_back(prev[i]+arr[N-1]);
        }
        return prev;
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
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends