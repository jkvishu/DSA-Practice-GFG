//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int find(int x){
        int sum=0;
        while(x){
            int k=x%10;
            sum+=k;
            x=x/10;
        }
        return sum;
    }
    int smithNum(int n) {
        // code here
        // POTD
       // ✅😏💯
       if(n==2||n==3||n==7||n==5)
       return 0;
        long long int sum=0;
        int flag=0;
        int k=n;
        while(k){
            int x=k%10;
            sum+=x;
            k=k/10;
        }
        long long int sum1=0,x=0;
        if(n%2==0){
            flag=1;
        while(n%2==0){
            x++;
            n=n/2;
        }
        sum1+=(x*2);
        x=0;
        }
        if(n%3==0){
            flag=1;
        while(n%3==0){
            x++;
            n=n/3;
        }
        sum1+=(x*3);
        x=0;
        }
        for(int i=5;i*i<=n;i=i+6){
            if(n%i==0){
                flag=1;
            while(n%i==0){
                sum1+=find(i);
               n=n/i;
            }
            }
            if((n%(i+2))==0){
                flag=1;
            while((n%(i+2))==0)
            {
                sum1+=find(i+2);
                n=n/(i+2);
            }
            }
        }
        if(n>3)
        {
           while(n){
            int x=n%10;
            sum1+=x;
            n=n/10;
        } 
        }
        if(sum1==sum&&flag==1)
        return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends