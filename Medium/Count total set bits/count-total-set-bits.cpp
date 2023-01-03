//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        //Done through yt help
        if(n == 0){
            return 0;
        }
        int x = log2(n);
        return (1 << (x - 1))*x + (n - (1 << x) + 1) + countSetBits(n - (1 << x));
        /* if n <= 1:
        same code here
            return n

        # exponent of 2

        a = math.log(n, 2)

        a = int(a)

        # (highest power of 2 less than the number)/2

        b = 2 ** a // 2

        # number-highest power of 2

        c = n - 2 ** a

        sol = (a * b + 1) + c + self.countSetBits(c)

        return sol*/
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends