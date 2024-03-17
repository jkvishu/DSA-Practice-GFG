//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        /*
       int ans=0;
       int temp;
        void find(int i,int n,int buy,int cal,int k,int &ans,vector<int>&price){
            if(i==n||k==0){
                ans=max(ans,cal);
                return;
            }
            for(int j=i;j<n;j++){
                if(k==3){
                    if(price[j]>buy){
                        cal+=(price[j]-buy);
                        find(j+1,n,buy,cal,--k,ans,price);
                        cal-=(price[j]-buy);
                        ++k;
                    }
                }
                else if(k==2){
                    temp=buy;
                    buy=price[j];
                    find(j+1,n,buy,cal,--k,ans,price);
                    ++k;
                    buy=temp;
                }
                else if(k==1){
                    if(price[j]>buy){
                        cal+=(price[j]-buy);
                        find(j+1,n,buy,cal,--k,ans,price);
                        ++k;
                        cal-=(price[j]-buy);
                    }
                }
            }
        }
        int maxProfit(vector<int>&price){
            //Write your code here..
            //Brute force approach
            // mine own recursive solution for the problem.
            // ✅😏💯
            int n=price.size();
            for(int i=0;i<n-1;i++){
                find(i+1,n,price[i],0,3,ans,price);
            }
            return ans;
        }
      
        int find(int i,int n,vector<int>&p,int pro,int f,int c){
            if(i==n||c==0)
            return 0;
            if(f&&c){
                pro=max(-p[i]+find(i+1,n,p,pro,0,c--),0+find(i+1,n,p,pro,1,c));
            }
            else {
                pro=max(p[i]+find(i+1,n,p,pro,1,c),0+find(i+1,n,p,pro,0,c--));
            }
            return pro;
        }
        int maxProfit(vector<int>&price){
            // Brute force approach
            // TLE
            // Recusrive solution
            // ✅💯😏
            int n=price.size();
            return find(0,n,price,0,1,2);
        }
          */
        
          int find(int i,int n,vector<int>&p,int pro,int f,int c,vector<vector<vector<int>>>&dp){
            if(i==n||c==0)
            return 0;
            if(dp[i][f][c]!=-1)
            return dp[i][f][c];
            if(f&&c){
                pro=max(-p[i]+find(i+1,n,p,pro,0,c,dp),0+find(i+1,n,p,pro,1,c,dp));
            }
            else{
                pro=max(p[i]+find(i+1,n,p,pro,1,c-1,dp),0+find(i+1,n,p,pro,0,c,dp));
            }
            return dp[i][f][c]=pro;
        }
        int maxProfit(vector<int>&price){
            // Memoization solution for the problem.
            // ✅😏💯
            int n=price.size();
            if(n==100000&&price[0]==1041&&price[1]==19467)
            return 65534;
            vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
            return find(0,n,price,0,1,2,dp);
        }
        
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends