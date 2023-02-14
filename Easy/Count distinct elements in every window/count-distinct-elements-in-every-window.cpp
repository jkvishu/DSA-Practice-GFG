//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //✅😏💯
        unordered_map<int,int>m;
        vector<int>v;
        int i=0,c=0,j=0;
        while(i<k){
            if(m.find(A[i])==m.end())
            c++;
            m[A[i]]++;
            i++;
        }
        v.push_back(c);
        while(i<n){
            if(A[i]==A[j] || m.find(A[i])!=m.end()){
                m[A[j]]--;
                m[A[i]]++;
                if(m[A[j]]==0){
                m.erase(A[j]);    
                c--;
                }
                v.push_back(c);
            }
            else{
                m[A[j]]--;
                if(m[A[j]]==0){
                m.erase(A[j]);    
                c--;
                }
                c++;
                m[A[i]]++;
                v.push_back(c);
            }
            j++;
            i++;
        }
        return v;
    }
    /*{
        //code here.
        //Sliding window problem done in first attempt.
        unordered_map<int,int>m;
        vector<int>v;
        int c=0,i,j=0;
        for(i=0;i<k;i++){
            if(m[A[i]]){
                m[A[i]]++;
            }
            else{
                m[A[i]]++;
                c++;
            }
        }
        v.push_back(c);
        while(i<n){
            if(m[A[j]]>0){
                m[A[j]]--;
            }
            if(m[A[j]]<=0)
            --c;
            if(m[A[i]]>0)
            m[A[i]]++;
            else
            {
            m[A[i]]++;    
            ++c;
            }
            v.push_back(c);
            i++;
            j++;
        }
        return v;
    }*/
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends