//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
        //Now I know the underlying concept very well so this time done in First attempt.
        //i.e Simple algorithm which say's that for the current block find the largest block on it's left and larget block on its right than take minimum of them as that much level can only be filled than subtract the current block as it will work as a stone for water thus we get the amount of water for that block 
        // similarly we have to find water level for each block and add it to get the total water stored in the bath
        int a[n],b[n];
        int mx=arr[0];
        long long int ans=0;
        a[0]=mx;
        for(int i=1;i<n;i++){
            if(arr[i]>mx){
                mx=arr[i];
                a[i]=mx;
            }
            else{
                a[i]=mx;
            }
        }
        mx=arr[n-1];
        b[n-1]=mx;
        for(int i=n-2;i>=0;i--){
            if(arr[i]>mx){
                mx=arr[i];
                b[i]=mx;
            }
            else{
                b[i]=mx;
            }
        }
        for(int i=0;i<n;i++){
            mx=min(a[i],b[i]);
            if((mx-arr[i])<0)
            continue;
            ans+=(mx-arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends