//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    /*bool findTriplets(int arr[], int n)
    { 
        //Your code here
        //POTD ✅😏💯
        //Brute force approach but not space optimized and not time optimized still accepted.LOL
       unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int x=arr[i]+arr[j];
                int y=(-1*x);
                if(y==arr[i]||y==arr[j]){
                if(y==arr[i]&&y==arr[j]){
                    if(m[y]>2)
                    return 1;
                }
                if((y==arr[i]&&y!=arr[j])||(y!=arr[i]&&y==arr[j])){
                    if(m[y]>1)
                    return 1;
                }
                }
                else{
                   if(m.find(y)!=m.end())
                   return 1; 
                }
            }
        }
        return 0;
    }
    */
    bool findTriplets(int arr[], int n)
    { 
        //✅💯
        //Most Optimized Approach
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int l=i+1,h=n-1;
            while(l<h){
                if(arr[i]+arr[h]+arr[l]<0){
                    l++;
                }
                else if(arr[i]+arr[l]+arr[h]>0){
                    h--;
                }
                else{
                    return 1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends
