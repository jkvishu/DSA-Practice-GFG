//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    /*{
        //code here
        //If any inbuilt function is not allowded to use than this solution can be used 
        //Done and design by me Vishu-Tyagi
        //✅💯😏
        //But this solution is to confusing and lengthy
         vector<int>v;
        int i,j=1,l=4,c,d=2,m=0,z=10;
        v.push_back(2);
        v.push_back(3);
        v.push_back(5);
        v.push_back(7);
        int N=v.size();
        if(n<=4)
        {
            return v[n-1];
        }
        while(l!=n)
        {
            c=d*z;
            if(j>4)
            {
            j=1;    
            m=N;
            N=v.size();
            }
            for(i=m;i<N;i++)
            {
                v.push_back(c+v[i]);
                l++;
                if(l==n)
                {
                    return c+v[i];
                }
            }
            if(j==4)
            {
                z=z*10;
                d=v[0];
                j++;
            }
            else
            {
            d=v[j++];
            }
        }
    }*/
    {
        //❌🤝💯
        //Ek dum sexy question
        //Ek dum sexy solution
        string ans="";
        while(n){
            if(n%4==0){
                ans+="7";
                n=n/4;
                n=n-1;
            }
            else if(n%4==1){
                ans+="2";
                n=n/4;
            }
            else if(n%4==2){
                ans+="3";
                n=n/4;
            }
            else{
                ans+="5";
                n=n/4;
            }
        }
        reverse(ans.begin(),ans.end());
        return stoi(ans);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends