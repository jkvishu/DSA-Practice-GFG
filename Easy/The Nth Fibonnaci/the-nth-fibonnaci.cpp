//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int fib(int N){
        //code here
        //Done in first attempt
        if(N==0)
        return 0;
        if(N==1 || N==2)
        return 1;
        long long int a=1,b=1,c=2,i=3;
        while(i<N){
            a=b;
            b=c;
            c=(a+b)%10;
            i++;
        }
        return c%10;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends