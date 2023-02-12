//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int numberOfSubarrays(vector<int>& arr, int N, int x){
        // code here
        //💯✅🤝 
        //naive solution
        //It becomes easy if we use extra space that is hashing.
        int c=0,psum=0;
        unordered_map<int,int>s;
        for(int i=0;i<N;i++){
            psum+=arr[i];
            if(psum==x)
            c++;
            if(s.find(psum-x)!=s.end())
            c+=s[psum-x];
            s[psum]++;
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
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends