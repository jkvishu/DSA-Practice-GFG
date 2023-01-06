//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        //Done on my own with my own logic
        //Dont by Vishu Tyagi
        int i,xr=0,fn=0,sc=0;
        vector<int>v;
        for(i=0;i<nums.size();i++){
            xr=xr^nums[i];
        }
        xr=(xr&(~(xr-1)));
        for(i=0;i<nums.size();i++){
            if((xr&nums[i])!=0){
                fn=fn^nums[i];
            }
            else{
                sc=sc^nums[i];
            }
        }
        v.push_back(min(fn,sc));
        v.push_back(max(fn,sc));
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends