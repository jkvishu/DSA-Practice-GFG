//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        // POTD:-> 💯❌©©👀
        unordered_set<string>st;
        for(int i = 0 ; i < s2.size() ; i++){
            st.insert(s2[i]);
        }
        for(int i = 0 ; i < s1.size() ; i++){
            string fr = "";
            string bk = s1[i];
            for(int j = 0 ; j < s1[i].length() ; j++){
                if(st.find(fr)!=st.end()) st.erase(fr);
                if(st.find(bk)!=st.end()) st.erase(bk);
                fr = fr + s1[i][j];
                bk.erase(0,1);
            }
        }
        return s2.size() - st.size();
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends