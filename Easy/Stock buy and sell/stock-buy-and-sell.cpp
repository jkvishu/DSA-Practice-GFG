//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        //Solution Done by me on my own in first attempt.
        //Without knowing the concept of DP and Greedy
        //Before it was a cpyypste
        vector<vector<int>> v;
        vector<int>temp;
        int j;
        for(int i=0;i<n-1;i++){
            j=i+1;
            if(j<n&&A[j]>A[j-1]){
                while(j<n&&A[j]>A[j-1]){
                    j++;
                }
                if(j<=n){
                    j--;
                    temp.push_back(i);
                    temp.push_back(j);
                    v.push_back(temp);
                }
                temp.clear();
                i=j;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends
