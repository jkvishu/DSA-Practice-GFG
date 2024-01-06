//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int find(int n){
        if(n==1)
        return 0;
        if(n==2||n==3||n==5)
        return 1;
        int c=0;
        while(n%2==0){
            c++;
            n=n/2;
        }
        while(n%3==0){
            c++;
            n=n/3;
        }
        for(int i=5;i*i<=n;i=i+6){
            while(n%i==0){
                c++;
                n=n/i;
            }
            while(n%(i+2)==0){
                c++;
                n=n/(i+2);
            }
        }
        if(n>3)
        return (c+1);
        return c;
    }
	int sumOfPowers(int a, int b){
	    // Code here
	    // POTD
	    // ✅💯😏
	    long long int ans=0;
	    while(a<=b){
	        ans+=(find(a));
	        a=a+1;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends