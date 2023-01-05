//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	//Done by Vishu Tyagi
    	//Done by help
     int evenBits = 0XAAAAAAAA;//number with all even bits as set
     int oddBits = 0X55555555;//number with all odd bits as set
     int leftNo = (n & evenBits); //Doing and with even bits
     int rightNo = (n & oddBits); //doing and with odd bits
     leftNo = leftNo >> 1; //Moving even index to left
     rightNo = rightNo << 1;//Moving odd index to right
     return leftNo | rightNo;  //finally performing or operation to get the result
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
// } Driver Code Ends