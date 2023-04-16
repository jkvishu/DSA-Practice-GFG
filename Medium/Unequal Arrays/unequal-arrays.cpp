//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        // ✅😏💯🤝👌🏻
        // The only thing that i miss is odd even concept otherwise all observations were discovered by me on my own.
        // This was good potd
        long long sum1=0,sum2=0;
        long long ans=0;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        vector<int>Aeo[2],Beo[2];
            for(int i=0;i<N;i++){
                sum1+=A[i];
                sum2+=B[i];
                if(A[i]%2==0)
                Aeo[0].push_back(A[i]);
                else
                Aeo[1].push_back(A[i]);
                if(B[i]%2==0)
                Beo[0].push_back(B[i]);
                else
                Beo[1].push_back(B[i]);
            }
            if(sum1!=sum2||Aeo[0].size()!=Beo[0].size()||Aeo[1].size()!=Beo[1].size())
            return -1;
            for(int i=0;i<Aeo[0].size();i++){
                ans+=abs(Aeo[0][i]-Beo[0][i])/2;
            }
            for(int i=0;i<Aeo[1].size();i++){
                ans+=abs(Aeo[1][i]-Beo[1][i])/2;
            }
            return ans/2;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends