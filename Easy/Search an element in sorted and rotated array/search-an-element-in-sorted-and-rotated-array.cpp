//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int K) 
{
    //code here
    //Done in first attempt without my logic as it was of coding min.
    //time taken 0.27 sec.
    int n=vec.size(),l=0,m;
    int h=n-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(vec[m]==K)
        {
            return m;
        }
        else if(vec[m]>=vec[l])
        {
            if(K>=vec[l]&&K<=vec[m])
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        else
        {
            if(K>=vec[m]&&K<=vec[h])
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
    }
    return -1;
}