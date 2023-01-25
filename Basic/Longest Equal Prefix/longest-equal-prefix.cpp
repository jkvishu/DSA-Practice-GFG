//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int findIndex(int arr[], int X, int Y, int n);


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>n>>x>>y;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		cout<<findIndex(a,x,y,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends



int findIndex(int arr[], int X, int Y, int N)
{
    // Your code goes here
    //Basic ha aise hi krdia mje ke liye
    int c=0,d=0,mx=-1;
    for(int i=0;i<N;i++){
        if(arr[i]==X)
        c++;
        if(arr[i]==Y)
        d++;
        if(c!=0&&c==d)
        mx=max(mx,i);
    }
    return mx;
}