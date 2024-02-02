//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        //POTD
        //✅😏💯
       //Done in first attempt with my own logic in 0.02 sec
        //How can be a question that much easy.
        int n=str.length(),c=0,k=10,i,flag=0;
        if(str[0]=='-')
        {
            flag=1;
        }
        for(i=flag;i<n;i++)
        {
            if(str[i]>='0'&&str[i]<='9')
            {
            c=(c*k)+(str[i]-'0');
            }
            else
            {
                return -1;
            }
        }
        if(flag==1)
        {
            c=c*-1;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends