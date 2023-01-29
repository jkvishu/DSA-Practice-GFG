//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> arr, long long x)
    {
        // code here
        // Easy BS✅
    pair<long,long>v;
    long long n=arr.size();
    long long int l=0,h=n-1,flag=0,j,k;
    while(l<=h){
        long long int m=(l+h)/2;
        if(arr[m]>x){
            h=m-1;
        }
        else if(arr[m]<x){
            l=m+1;
        }
        else{
            j=k=m;
            while(j>=0&&arr[j]==arr[m]){
                j--;
            }
            while(k<n&&arr[k]==arr[m]){
                k++;
            }
            flag=1;
            break;
        }
    }
    if(flag!=0){
        if(j<0)
        j=0;
        else
        j++;
        if(k>=n)
        k=n-1;
        else
        k--;
        v=make_pair(j,k);
        return v;
    }
    else
    return {-1,-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends