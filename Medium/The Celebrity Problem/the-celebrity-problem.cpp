//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    /*{
        // code here 
        // Brute force Done ✅💯😏
        int i,j,k=0,r,b=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(M[i][j]==1)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                r=i;
                b=b+1;
                if(b==2)
                {
                    break;
                }
            }
            k=0;
        }
        if(b==1)
        {
            return r;
        }
        else
        {
        return -
    }
};*/
    int celebrity(vector<vector<int> >& M, int n) 
    {
        //Let's see the optimized approach.
        // 🤝🥵👀
        int c=0;
        for(int i=1;i<n;i++){
            if(M[c][i]==1)
            c=i;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(M[i][c]==1)
            cnt++;
            if(M[c][i]==1)
            cnt++;
        }
        if(cnt==n-1)
        return c;
        return -1;
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
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends