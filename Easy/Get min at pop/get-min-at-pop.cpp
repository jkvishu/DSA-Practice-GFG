//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

// } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
int mn=0;
stack<int> _push(int arr[],int n)
{
   // your code here
   // ✅💯😏
   stack<int>s;
   s.push(arr[0]);
   mn=arr[0];
   for(int i=1;i<n;i++){
       if(arr[i]>mn){
           s.push(arr[i]);
       }
       else{
           int x=arr[i]-mn;
           mn=arr[i];
           s.push(x);
       }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
        cout<<mn<<" ";
        if(s.top()<0){
            mn=mn-s.top();
        }
        s.pop();
    }
    mn=0;
}

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}


// } Driver Code Ends