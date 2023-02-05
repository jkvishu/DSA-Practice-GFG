//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        // Ye bhi koi question ha 😂✅💯
        int a[n],j=0,k=0,b[n],l,i;
        for(i=0;i<n;i++){
            if(arr[i]>=0){
                a[j++]=arr[i];
            }
            else{
                b[k++]=arr[i];
            }
        }
        i=l=0;
        while(l<j){
            arr[i++]=a[l];
            l++;
        }
        l=0;
        while(l<k){
            arr[i++]=b[l];
            l++;
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends