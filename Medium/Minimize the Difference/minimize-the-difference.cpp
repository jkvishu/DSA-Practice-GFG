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
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        // POTD
        // ✅💯😏
        vector<int>maxl(n,0),minl(n,0),maxr(n,0),minr(n,0);
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                minl[i]=arr[i];
                maxl[i]=arr[i];
            }
            else
            {
                minl[i]=min(minl[i-1],arr[i]);
                maxl[i]=max(maxl[i-1],arr[i]);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                minr[i]=arr[i];
                maxr[i]=arr[i];
            }
            else
            {
                minr[i]=min(minr[i+1],arr[i]);
                maxr[i]=max(maxr[i+1],arr[i]);
            }
        }
        for(int i=0;i<=n-k;i++)
        {
            int posl=i-1;
            int posr=i+k;
            int mini=INT_MAX,maxi=INT_MIN;
            if(posl>=0)
            {
                mini=min(mini,minl[posl]);
                maxi=max(maxi,maxl[posl]);
            }
            if(posr<n)
            {
                mini=min(mini,minr[posr]);
                maxi=max(maxi,maxr[posr]);
            }
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends