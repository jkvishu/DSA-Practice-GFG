//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        //✅😏💯
        unordered_map<int,int>m;
        m[0]=-1;
        int sum=0,ans=0;
        for(int i=0;i<N;i++){
            if(arr[i]==0)
            sum--;
            if(arr[i]==1)
            sum++;
            if(m.find(sum)!=m.end())
            ans=max(ans,i-m[sum]);
            if(m.find(sum)==m.end())
            m[sum]=i;
        }
        return ans;
    }
    /*{
        // Your code here
        //Done after getting a little idea from pepcoding.
        //I Was extremely close to the same approach.
        unordered_map<int,int>m;
        int s=0,ans=0,c1=0,c0=0;
        m[0]=-1;
        for(int i=0;i<N;i++){
            if(arr[i]==0)
            {
                s+=-1;
                c0++;
            }
            else{
                s+=+1;
                c1++;
            }
            if(m.find(s)!=m.end()){
                    ans=max(ans,i-m[s]);
                }
                else{
                    m[s]=i;
                }
        }
        if(c0==c1)
        return N;
        return ans;
    }*/
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends