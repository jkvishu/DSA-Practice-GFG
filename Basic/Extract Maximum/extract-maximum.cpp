//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        //code here.
         int num=-1;
        int sum=-1;
        bool f =false;
        int n = S.size();
        for(int i=0;i<n;i++){
            if('0'<=S[i] and S[i]<='9'){
                if(!f){
                    f=true;
                    sum=0;
                }
                sum=((sum*10)+(S[i]-'0'));
            }
            else{
                f=false;
                num=max(num,sum);
            }
                
        }
        num=max(num,sum);
        return num;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends