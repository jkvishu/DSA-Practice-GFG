//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
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
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        //GFG is not accepting it
        vector<int>v;
        vector<vector<int>>ans;
        int n=pow(2,A.size());
        for(int i=0;i<n;i++){
            for(int j=0;j<A.size();j++){
                if((i&(1<<j))!=0){
                    v.push_back(A[j]);
                }
            }
            if(v.size()>0){
            ans.push_back(v);
            }
            v.clear();
        }
        sort(ans.begin(),ans.end(),cmp);
        return ans;
    }*/
    void solve (vector<int>& A,vector<vector<int>> &vc,vector<int> temp,int index){

        

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

    

    vector<vector<int> > subsets(vector<int>& A)

    {

        //code here
        //MY code is also correct but it is not working at all due to gfg error.

        vector<vector<int>> vc;

        vector<int> temp;

        int index=0;

        solve(A,vc,temp,index);

        sort(vc.begin(),vc.end());

        return vc;

        

    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends