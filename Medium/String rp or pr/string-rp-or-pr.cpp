//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    string delAB(char a,char b,long long& cnt,string& S){
        string temp;
        for(const auto& x: S){
            if(!temp.empty() && temp.back() == a && x == b){
                temp.pop_back();
                cnt++;
            }
            else temp += x;
        }
        return temp;
    }
    
    long long solve(int X,int Y,string S){
      //code here
      //POTD ❌©👀
        long long cnt1 = 0,cnt2 = 0;
        
        char a = 'p', b = 'r';
        if(X < Y)swap(a,b);
        
        string temp = delAB(a,b,cnt1,S);
        delAB(b,a,cnt2,temp);
        
        if(X < Y)swap(cnt1,cnt2);
        
        return cnt1*X + cnt2*Y;
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends