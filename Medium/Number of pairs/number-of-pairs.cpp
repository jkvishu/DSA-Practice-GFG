//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int find(int y[] , int n , int ele){
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(y[mid] >ele){
                ans = mid;
                high  =mid -1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
    long long countPairs(int X[], int Y[], int m, int n) {
        // code here
        int s1,s2,s3,s4,s0;
        s1=s2=s3=s4=s0=0;
        sort(X,X+m);
        sort(Y,Y+n);
        for(int i=0;i<n;i++){
            if(Y[i]==0)
            s0++;
            else if(Y[i]==1)
            s1++;
            else if(Y[i]==2)
            s2++;
            else if(Y[i]==3)
            s3++;
            else if(Y[i]==4)
            s4++;
        }
        long long int ans=0;
        for(int i=0;i<m;i++){
            if(X[i]==0)
            continue;
            else if(X[i]==1){
                ans+=s0;
            }
            else if(X[i]==2){
                int id=find(Y,n,2);
                if(id!=-1)
                ans+=(n-id);
                ans-=s3;
                ans-=s4;
                ans+=(s1+s0);
            }
            else{
                int id=find(Y,n,X[i]);
                if(id!=-1)
                ans+=n-id;
                ans+=(s0+s1);
                if(X[i]==3){
                    ans+=s2;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];
        for (int i = 0; i < m; i++) {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        Solution ob;
        auto ans = ob.countPairs(X, Y, m, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends