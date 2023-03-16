//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
        //code here 
        //❌©©👀
        if(9*D < S || D==1){
            return "-1";
        }
        vector<int>v(D,0);
        int i=D-1;
        int sum=S-1;
        while(1){
            if(sum<=9){
                v[i]=sum;
                break;
            }
            sum-=9;
            v[i]=9;
            i--;
        }
        string ans;
        v[0]+=1;
        int index=D-1;
        for(int i=D-1;i>=0;i--){
            if(v[i]==9){
                index=i;
            }
            else{
                break;
            }
        }
        if(index==0) return "-1"; 
        v[index]-=1;
        v[index-1]+=1;
        for(auto it:v){
            ans+=to_string(it);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends