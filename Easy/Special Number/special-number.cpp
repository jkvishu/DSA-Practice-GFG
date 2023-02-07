//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
	int countOfSpeacialNo(int n, int b){
	    // Code here
	    // ✅😏
	    int count=0;
        for(int i=0;i<pow(b,n);i++)
        {
            int test=i,s1=0,s2=0;
            for(int j=1;j<=n/2;j++)
            {
                s1+=(test%b);
                test/=b;
            }
            for(int j=1;j<=n/2;j++)
            {
                s2+=(test%b);
                test/=b;
            }
            if(s1==s2)
            count++;
        }
        return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, b;
		cin >> n >> b;
		Solution obj;
		int ans = obj.countOfSpeacialNo(n, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends