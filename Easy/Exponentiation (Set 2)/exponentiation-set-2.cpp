//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int power(int a, long long int b) { 
        //complete the function here
        //Done by my on my own
        long long int m=1000000007,temp;
        if(b==0)
        return 1;
        temp=power(a,b/2);
        temp=((temp%m)*(temp%m))%m;
        if(b%2==0)
        return temp;
        else
        return (temp*a)%m;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends