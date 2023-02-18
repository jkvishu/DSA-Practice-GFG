//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
// } Driver Code Ends


//User function template for C++

void setd(int a[],int c){
    for(int i=1;i<16;i++){
        a[i-1]=c;
        if(i%3==0)
        c++;
    }
    for(int i=15;i<=18;i++){
        a[i]=7;
    }
    for(int i=19;i<=21;i++){
        a[i]=8;
    }
    for(int i=22;i<=25;i++){
        a[i]=9;
    }
}

//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    //✅💯😏
    string ans="";
    int a[26]={0},c=2;
    setd(a,c);
    for(int i=0;i<n;i++){
        int x=a[s[i]-'a'];
        ans+=(to_string(x));
    }
    return ans;
}
