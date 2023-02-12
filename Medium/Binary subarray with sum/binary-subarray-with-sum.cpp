//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int solve(vector<int>&a,int n,int x){
        if(x<0)
        return 0;
        int j=0,ans=0;
        for(int i=0;i<n;i++){
            x-=a[i];
            while(x<0){
                x+=a[j++];
            }
            ans+=i-j+1;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& arr, int N, int x)
    /*{
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
    }*/
    {
        //Let's solve the problem with the given constraints.
        //👌🏻🥵💯👀❌
        //Becomes super hard 🥵🥵🥵🥵🥵🥵
        //Optimized Solution
        return (solve(arr,N,x)-solve(arr,N,x-1));
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
