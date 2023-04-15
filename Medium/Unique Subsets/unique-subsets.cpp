//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
  /*static bool cmp(vector<int>a,vector<int>b){
	        if(a[0]==b[0]){
	            int i=0;
	            while(a[i]==b[i])
	            {
	                i++;
	                if(i<a.size()&&i<b.size()){
	                    continue;
	                }
	                else{
	                    return a.size()<b.size();
	                }
	            }
	            return a[i]<b[i];
	        }
	        else{
	            return a[0]<b[0];
	        }
	    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        // ✅💯😏
        // TLE 250 test case passed
         vector<int>v;
        vector<vector<int>>ans;
        vector<vector<int>>fans;
        int N=pow(2,n);
        sort(arr.begin(),arr.end());
        for(int i=0;i<N;i++){
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    v.push_back(arr[j]);
                }
            }
            if(v.size()>0){
            ans.push_back(v);
            }
            v.clear();
        }
        sort(ans.begin(),ans.end(),cmp);
        fans.push_back({});
        fans.push_back(ans[0]);
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=ans[i-1]){
                fans.push_back(ans[i]);
            }
        }
        return fans;
    }*/
   /*void solve (vector<int>& A,vector<vector<int>> &vc,vector<int> temp,int index){
        if(index >=A.size()){
            // collect the subsets
            vc.push_back(temp);
            return;
        }
        // excluding the values
        solve(A,vc,temp,index+1);
        // including the value
        temp.push_back(A[index]);
        solve(A,vc,temp,index+1);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        //✅😏😏
        //298 Test cases passed than throw TLE 
        sort(arr.begin(),arr.end());
        vector<vector<int>> vc;
        vector<vector<int>> ans;
        vector<int> temp;
        int index=0;
        solve(arr,vc,temp,index);
        sort(vc.begin(),vc.end());
        ans.push_back(vc[0]);
        for(int i=1;i<vc.size();i++){
            if(vc[i]!=vc[i-1])
            ans.push_back(vc[i]);
        }
        return ans;
    }*/
    void solve(vector<int> arr, set<vector<int>> &s, vector<int> a, int i){
        if(i==arr.size()){
            s.insert(a);
            return;
        }
        solve(arr, s, a, i+1);
        a.push_back(arr[i]);
        solve(arr, s, a, i+1);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        //Final answer
        //✅©👀🤝
        vector<vector<int>> v;
        set<vector<int>> s;
        sort(arr.begin(), arr.end());
        solve(arr, s, {}, 0);
        for(auto e: s){
            v.push_back(e);
        }
        sort(v.begin(), v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends