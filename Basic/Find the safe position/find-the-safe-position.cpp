//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	int find_pos(int N){
   	    // Coder here
   	    //Working fine similar to joshep problem
   	    //Already know the concept used in more than three questions together same logic and same code
   	    //Done by vishu tyagi
   	    /*vector<int>arr(N);
   	    int i;
   	    for(i=0;i<N;i++){
   	        arr[i]=i+1;
   	    }
   	    i=0;
   	    while(arr.size()!=1){
   	        i=(i+1)%arr.size();
   	        arr.erase(arr.begin()+i);
   	    }
   	    return arr[0];*/
   	    //differnet method
   	    int p=1;
   	    while(p<=N){
   	        p*=2;
   	    }
   	    return (2*N)-p+1;
    }    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.find_pos(N);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends