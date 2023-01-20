//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        //Done in first attempt and you can clearly see the difference i build in solving problem from past to present by seeing the quality of both the solutions
        int i,j=0,c=0,mx=a[0];
        for(i=1;i<n;i++){
            if(a[i]!=mx){
                j++;
                mx=a[i];
                swap(a[i],a[j]);
                c++;
            }
        }
        return c+1;
    }
    /*int remove_duplicate(int a[],int n)
    {
        int i,j=1,x=1,k=0;
        for(i=1;i<n;i++)
        {
            while(a[i]==a[i-1])
            {
                i++;
                if(i==n)
                {
                    k=1;
                    break;
                }
            }
            if(k==1)
            {
                break;
            }
            else
            {
                a[j]=a[i];
                j++;
                x++;
            }
        }
        return x;
    }*/
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends