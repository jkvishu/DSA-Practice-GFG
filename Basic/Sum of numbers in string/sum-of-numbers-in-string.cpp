//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	// Your code here
    	// ✅💯
    	long long int ans=0;
    	string temp="";
    	for(int i=0;i<str.length();i++){
    	    if((str[i]-'0')>=0&&(str[i]-'0')<=9){
    	        temp.push_back(str[i]);
    	    }
    	    else{
    	        if(temp.size()>0){
    	        ans+=(stoi(temp));
    	        temp="";
    	        }
    	    }
    	}
    	if(temp.size()>0){
    	ans+=(stoi(temp));
    	}
    	return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends