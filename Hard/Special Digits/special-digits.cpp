//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   const int mod=1e9+7;
    bool check(int sum,int &C,int &D){
        while(sum){
               int d=sum%10;
               if(d!=C and d!=D) return 0;
               sum/=10;
           }
        return 1;
    }
    
    long long invmod(long long a){
        long long b=mod-2;
        long long res=1;
        while(b){
            if(b&1) res=(res*a)%mod;
            b>>=1;
            a=(a*a)%mod;
        }
        return res;
    }
    int bestNumbers(int N, int A, int B, int C, int D) {
        //❌©👀©
       long long ans=0;
       vector<long long>fact(N+1);
       fact[0]=1;
       fact[1]=1;
       for(int i=2;i<=N;i++) fact[i]=(fact[i-1]*i)%mod;
       for(int i=0;i<=N;i++){
           int sum=i*A+(N-i)*B;
           if(check(sum,C,D)){
               long long t=(fact[N]*invmod(fact[i]))%mod;
               t=(t*invmod(fact[N-i]))%mod;
               ans=(ans+t)%mod;
           }
       }
       return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int A;
        scanf("%d",&A);
        
        
        int B;
        scanf("%d",&B);
        
        
        int C;
        scanf("%d",&C);
        
        
        int D;
        scanf("%d",&D);
        
        Solution obj;
        int res = obj.bestNumbers(N, A, B, C, D);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends