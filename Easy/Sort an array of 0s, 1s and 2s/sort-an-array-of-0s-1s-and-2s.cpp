//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
{
    int i,l,j,k;
    l=j=k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            l++;
        }
        else if(a[i]==1)
        {
            j++;
        }
        else 
        {
            k++;
        }
    }
    i=0;
    while(l!=0)
    {
        a[i++]=0;
        l--;
    }
    while(j!=0)
    {
        a[i++]=1;
        j--;
    }
    while(k!=0)
    {
        a[i++]=2;
        k--;
    }
}
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends