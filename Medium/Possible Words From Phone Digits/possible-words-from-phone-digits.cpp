//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string>ans;
    vector<string>st={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void helpkrsale(int a[],string temp,int i,int n){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        for(int j=0;j<st[a[i]].size();j++){
            helpkrsale(a,temp+st[a[i]][j],i+1,n);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        //Done after learning from acmnt
        //Good question ✅
        helpkrsale(a,"",0,N);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends