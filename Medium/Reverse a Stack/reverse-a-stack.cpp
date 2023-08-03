//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void call(stack<int>&st,vector<int>&s){
        if(st.size()!=0){
            s.push_back(st.top());
            st.pop();
            call(st,s);
        }
    }
    void Reverse(stack<int> &St){
        //POTD ✅😏💯
        //Done by me on my own it was very very easy with iterative but we have to do with recursion that makes it worthy.
        //In first attempt done by vishu tyagi
        vector<int>s;
        int i,n=St.size();
        call(St,s);
        for(i=0;i<n;i++){
            St.push(s[i]);
        }
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends