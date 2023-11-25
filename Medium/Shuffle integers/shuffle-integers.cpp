//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	   void shuffleArray(int nums[],int n)
    {
        //POTD
        int len = n;
        n = n/2;
        
        // Storing the pair in the right half
        for(int i=n; i<len; i++){
            nums[i] = nums[i]*1024 + nums[i-n];
        }
        
        // Now extract the nums from the second half and place it in it's suitable position
        for(int i=n, index = 0; i<len; i++, index+=2){
            nums[index] = nums[i] %  1024;
            nums[index+1] = nums[i] / 1024;
        }
    }	 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends