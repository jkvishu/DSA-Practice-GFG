//{ Driver Code Starts
//
// Created by Tanuj Johal on 24-06-2020.
//
#include <bits/stdc++.h>
using namespace std;

long long countPairs(int *a,int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long ans = countPairs(a,n);
        cout<<ans<<endl;
    }
}


// } Driver Code Ends




long long countPairs(int a[],int n){
    // Complete the function and return the answer.
    //Done on my own in first attempt
    int i;
    long long ans=0,mx=INT_MIN,mn=INT_MAX,sum=0;
    for(i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    for(i=0;i<n;i++){
    if(a[i]<mn){
            mn=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==mn){
            sum++;
        }
        else if(a[i]==mx){
            ans++;
        }
    }
    return sum*ans;
}