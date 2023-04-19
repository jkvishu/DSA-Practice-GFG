//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    vector<string> convert(int a,int b,int c,string d)
    {
        // code here
        // 👀❌©
        string res = "";
        vector<string>ans;
        while(a!=0){
            int rem = a%2;
            res+=to_string(rem);
            a=a/2;
        }
        reverse(res.begin(),res.end());
        ans.push_back(res);
        
        
        int res2=0;
        int i=1;
        while(b!=0){
            int rem=b%10;
            res2=res2+rem*i;
            i=i*2;
            b=b/10;
        }
        ans.push_back(to_string(res2));
        
        string res3 = "";
        while(c!=0){
            int rem =c%16;
            if(rem<10){
                res3+=to_string(rem);
            }
            else{
                res3+=(char)('A' + (c%16)-10);
            }
            c/=16;
        }
        reverse(res3.begin(),res3.end());
        ans.push_back(res3);
        
        
        int res4=0;
        int base=1;
        for(int i=d.length()-1;i>=0;i--){
            if(d[i]>=0 && d[i]<='9'){
                res4+=(d[i]-48)*base;
                base=base*16;
            }
            else if(d[i]>='A' && d[i]<='F'){
                res4+=(d[i]-55)*base;
                base*=16;
            }
            
        }
        ans.push_back(to_string(res4));
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
        int a,b,c;
        string d;
        cin>>a>>b>>c>>d;
        
        Solution ob;
        vector<string> ans = ob.convert(a,b,c,d);
        
        for(int i = 0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0; 
}
// } Driver Code Ends