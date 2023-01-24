//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        // your code here
        //Issee simple kya hi hoga Modified Kadane's algo GFG-C.
        //+Normal kadane's algo than simple return max among both the answer.
        //Done in first attempt
        if(num==1)
        return arr[0];
        int i,ans=INT_MAX,cal=0,temp=0,ans1=INT_MIN;
        for(i=0;i<num;i++){
            temp+=arr[i];
            cal+=arr[i];
            ans=min(ans,cal);
            if(cal>0){
                cal=0;
            }
        }
        cal=0;
        for(i=0;i<num;i++){
            cal+=arr[i];
            ans1=max(ans1,cal);
            if(cal<0){
                cal=0;
            }
        }
        if(temp==ans)
        return ans1;
        return max(temp-ans,ans1);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends