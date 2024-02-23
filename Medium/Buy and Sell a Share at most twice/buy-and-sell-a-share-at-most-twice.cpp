//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        /*int ans=0;
        void find(int i,int n,int buy,int cal,int k,int &ans,vector<int>&price){
            if(i==n||k==0){
                ans=max(ans,cal);
                return;
            }
            for(int j=i;j<n;j++){
                if(k==3){
                    if(price[j]>buy){
                        cal+=(price[j]-buy);
                        find(j+1,n,buy,cal,k--,ans,price);
                        cal-=(price[j]-buy);
                    }
                }
                else if(k==2){
                    buy=price[j];
                    find(j+1,n,buy,cal,k--,ans,price);
                }
                else if(k==1){
                    if(price[j]>buy){
                        cal+=(price[j]-buy);
                        find(j+1,n,buy,cal,k--,ans,price);
                        cal-=(price[j]-buy);
                    }
                }
            }
        }
        int maxProfit(vector<int>&price){
            //Write your code here..
            int n=price.size();
            for(int i=0;i<n-1;i++){
                find(i+1,n,price[i],0,3,ans,price);
            }
            return ans;
        }*/
        int maxProfit(vector<int>&price){
            //Write your code here..
            //POTD
            //©👀❌
            int n;
    n=price.size();
     int buy1 = INT_MIN;
     int sell1 = 0;
     int buy2 = INT_MIN;
     int sell2 = 0;
      
     for(int i=0;i<n;i++) {
        
         buy1 = max(buy1,-price[i]);
         sell1 = max(sell1,buy1+price[i]);
         buy2 = max(buy2,sell1-price[i]);
         sell2 = max(sell2,buy2+price[i]);
   }
    return sell2;
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