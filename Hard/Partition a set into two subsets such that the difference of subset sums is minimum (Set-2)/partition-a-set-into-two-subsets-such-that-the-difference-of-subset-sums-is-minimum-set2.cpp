//{ Driver Code Starts
                               //Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int sum;
    
    int solve(vector<int> &arr, int index, int taken, int x, int currsum, int total){
        if(index>= arr.size())
            return INT_MAX;
        
        if(taken == x){
            return currsum;
        }
        int a = solve(arr, index+1, taken, x, currsum, total);
        int b = solve(arr, index+1, taken+1, x, currsum+arr[index], total);
        
        if(abs(total -a) < abs(total - b))
            return a;
            
        return b;
    }
    
    
    vector<vector<int>> minDifference(vector<int>& arr, int n){
        //Code here
        //©🤝❌
        sum = accumulate(arr.begin(), arr.end(), 0);
        int x = n/2;
        int ans = solve(arr, 0, 0 ,x, 0, sum/2);
        
        return {{min(ans,sum-ans)} , {max(ans,sum-ans)}};
    }
     /*
        //Code here
        //✅😏💯
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        vector< vector<int> >dp(n,vector<int>(abs(sum)+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=1;
        }
        if(arr[0]<=sum)
        dp[0][arr[0]]=1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                int pick=0;
                if(arr[i]<=j)
                pick=dp[i-1][j-arr[i]];
                int ntpick=dp[i-1][j];
                dp[i][j]=pick|ntpick;
            }
        }
        int ans=1e9;
        int fans1=0,fans2=0;
        for(int i=0;i<=sum/2;i++){
            if(dp[n-1][sum]){
                if(abs((sum-i)-i)<ans){
                    ans=abs((sum-i)-i);
                    fans1=i;
                    fans2=sum-i;
                }
            }
        }
        vector<vector<int>>aa;
        
        aa.push_back({min(fans1,fans2)});
        aa.push_back({max(fans1,fans2)});
        return aa;
    }*/
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        vector<vector<int>> ans = obj.minDifference(arr,n);
        
        long long s1=0, s2=0;

        for(int i=0;i<ans[0].size();i++) s1+=ans[0][i];
        for(int i=0;i<ans[1].size();i++) s2+=ans[1][i];
        
        if(s1>s2) swap(s1,s2);

        cout<<s1<<"\n"<<s2<<"\n";
    }
}
                               
// } Driver Code Ends