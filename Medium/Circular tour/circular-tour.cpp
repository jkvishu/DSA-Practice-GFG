//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       //🤝✅💯
       int ptneed=0;
       int ptexrta=0;
       int i=0,ans=0;
       while(i<n){
           ptexrta+=p[i].petrol-p[i].distance;
           if(ptexrta<0){
               ptneed+=abs(ptexrta);
               ptexrta=0;
               ans=i+1;
           }
           i++;
       }
       if(ptexrta>=ptneed)
       return ans;
       return -1;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends