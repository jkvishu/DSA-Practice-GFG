//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool find(int N){
        if(N==7||N==1)
        return 1;
        int s=N,c=N;
        while(s>9){
            s=0;
            while(c>0){
                int d=c%10;
                s+=d*d;
                c=c/10;
            }
            if(s==1)
            return 1;
            c=s;
        }
        if(s==7)
        return 1;
        return 0;
    }
    int nextHappy(int N){
        // code here
        // 🤝💯👀
        N=N+1;
        while(true){
            if(find(N))
            return N;
            N++;
        }
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
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends