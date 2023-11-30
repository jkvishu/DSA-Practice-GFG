//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        //Pta nhi lawde ka ques
        // POTD
        //©❌👀
        int ans=0;
        while(n){
            if(n%3==0)
            {
                ans++;
                n=n/3;
            }
            else{
                if(n>0){
                    ans++;
                    n=n-1;
                }
            }
        }
        return ans-1;
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
        cin >> n;
        Solution ob;
        cout << ob.minimumStep(n) << endl;
    
    }
    return 0; 
} 


// } Driver Code Ends