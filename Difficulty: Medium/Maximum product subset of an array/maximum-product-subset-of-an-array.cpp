//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   long long int findMaxProduct(vector<int>&a)
    {
        int n=a.size();
        long prod =1;
        int ma = INT_MIN;
        int mod = 1e9+7;
        int zc = 0;
        int nc = 0;
       
       if(n==1)return a[0];
       for(int i=0;i<n;i++){
       //   AGAR EK BHI ZERO MILA TOH USKO CHOR KAR HUM DUSRE I PAR JAYENGE 
           if(a[i]==0){
               zc++;
               continue;
           }    
           // IF IN CASE OF NEGATIVE ++ KARENGE AND JO SABSE MAX HOGA USKO NIKAL LENGE
           // LIKE -1,-2,-3 ISME HUM -1 NIKALENGE 
           if(a[i]<0){
               nc++;
               ma = max(ma,a[i]);
           }
           
           prod = (prod*a[i])%mod;
       }
       // 0 0 0 0 0 AISA HAIA TOH OBVIOUSLY 0 HOGA
       if(zc==n){
           return 0;
       }
       // 0 0 0 -1 AISA HAI PHIR BHI 0
       if(nc==1 && zc+nc==n){
           return 0;
       }
       // AGAR NEGATIVE COUNT ODD HAI USNE TOH HUMARE PROD KO MINIMUM KARDIA ISILIYE HUM 
       // ma SE DIVIDE KARENGE LIKE -1 -2 -3 -4 -5 
       // ISKA PROD -120 AAYA HAI TOH USKO HUM -1 SE DIVIDE KARKE POSITIVE KARDENGE
       if(nc & 1){
           prod = (prod/ma)%mod;
       }
       // PROD BADA NA HOJAYE ISILIYE % MOD KARRAHE HAIN
       return prod%mod;
   
    }
    /*
    {
        //Write your code here 
        // my approach for the question was 100% accurate at once.
        // iske jeetne bhi case bnte wo sb sahi soch liye they.
        //finally done on my own 
        // the only mistake due to which i was getting wrong submit 
        //was that i was taking max of after product.which should not be done.
        int n=a.size();
        if(n==1)
        return a[0];
        long long p=1;
        int i,odd=INT_MIN,flag=0,k=0,c=0;
        int mc=1e9+7;
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                c++;
                odd=max(odd,a[i]);
            }
            if(a[i]==0)
            {
                k++;
            }
        }
        if(c%2!=0)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==odd&&flag==0)
                {
                    flag=1;
                    continue;
                }
                if(a[i]==0)
                {
                    continue;
                }
                p=(p*a[i])%mc;
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if((a[i]%mc)==0)
                {
                    continue;
                }
               p=(p*a[i])%mc;
            }
        }
        if(p<0&&k>0)
        {
            return 0;
        }
        if(c==1&&k>0&&p==1)
        {
            return 0;
        }
        return p;
    }
    */
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends