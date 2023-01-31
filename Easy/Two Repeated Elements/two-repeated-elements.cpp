//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        // If we are allowed to change the array than this question is damn easy
        // ⭐️❌🤝
       vector<int>v;
       int c=0;
       for(int i=0;i<N+2;i++){
           arr[abs(arr[i])-1]*=-1;
           if(arr[abs(arr[i])-1]>0){
               v.push_back(abs(arr[i]));
               c++;
               if(c==2)
               break;
           }
       }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends