//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		// Easy peasy ✅💯😏
		int n=A[0].size();
		int ans=0;
		int i=0,j=n-1;
		while(i<n&&j>=0){
		    while(j>=0&&A[i][j]==1){
		        j--;
		    }
		    if(j<0)
		    break;
		    i++;
		    ans+=j+1;
		}
		return ans;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends