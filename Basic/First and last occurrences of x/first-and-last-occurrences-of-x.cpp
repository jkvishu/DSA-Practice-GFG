//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    //Lol basic BS✅
    vector<int>v;
    int l=0,h=n-1,flag=0,j,k;
    while(l<=h){
        int m=(l+h)/2;
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
        v.push_back(j);
        v.push_back(k);
        return v;
    }
    else
    return {-1,-1};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends