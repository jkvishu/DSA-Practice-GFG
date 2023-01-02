//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long mpow(long long a, long long b, long long m)
    {
        //The only solution exist this question is very hard and it's in easy how?
        long long x=1, y=a;
        while(b>0)
        {
            if(x==0)
                return x;
            if(b&1)
            {
                x=(x*y);
                if(x>m)
                    x%=m;
            }
            y=(y*y);
            if(y>m)
                y%=m;
            b=b>>1;
        }
        return x%m;
    }
    
    long long geoProg(long long N) {
        
        long long MOD = 1000000007;
        
        long long ans = (mpow(2,mpow(2,N,MOD-1),MOD)-1+MOD)%MOD;
        
        return ans;
    }
//   long long power(long long int n){
//       long long int temp;
//       long long int m=1000000007;
//       if(n==0)
//       return 1;
//       temp=power(n/2)%m;
//       temp=(temp*temp)%m;
//       if(n%2==0)
//       return (temp%m);
//       else
//       return (temp*2)%m;
//   }
//     long long geoProg(long long N) 
//     {
//         // code here
//         long long int m=1000000007;
//         long long int n,k;
//         n=(power(N)%m);
//         k=(power(n)%m);
//         return (k-1)%m;
//     }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.geoProg(N) << endl;
    }
    return 0;
}
// } Driver Code Ends