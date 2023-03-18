//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        /*{
            //code here.
            //✅😏💯
            unordered_set<int>s;
            unordered_set<int>k;
            unordered_set<int>m;
            vector<int>ans;
            for(int i=0;i<n1;i++){
                s.insert(A[i]);
            }
            for(int i=0;i<n2;i++){
                k.insert(B[i]);
            }
            for(int i=0;i<n3;i++){
                if(s.find(C[i])!=s.end()&&k.find(C[i])!=k.end())
                {
                    if(m.find(C[i])==m.end())
                    {
                        ans.push_back(C[i]);
                        m.insert(C[i]);
                    }
                }
            }
            return ans;
        }*/
       {
           //Another approach in single traversal
           //✅🤝💯
           unordered_set<int>s;
           vector<int>ans;
           int i=0,j=0,k=0;
           while(i<n1&&j<n2&k<n3){
               if(A[i]==B[j]&&B[j]==C[k]){
                   if(s.find(A[i])==s.end()){
                       ans.push_back(A[i]);
                       s.insert(A[i]);
                   }
               }
               if(A[i]<B[j])
               i++;
               else if(B[j]<C[k])
               j++;
               else
               k++;
           }
           return ans;
       }
       

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends