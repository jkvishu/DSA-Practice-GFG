//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        //Done in first attempt
        unordered_map<int,int>m;
        vector<pair<int,int>>v;
        vector<int>ans;
        int j,k;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        auto it=m.begin();
        while(it!=m.end()){
            v.push_back({it->second,it->first});
            ++it;
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            j=i;
            k=i;
            if(j>0&&v[j].first==v[j-1].first){
            while(j>0&&v[j].first==v[j-1].first){
                j--;
            }
            i=j;
            while(j<=k){
            while(v[j].first!=0){
                ans.push_back(v[j].second);
                v[j].first--;
            }
            j++;
            }
            }
            else{
                while(v[i].first!=0){
                    ans.push_back(v[i].second);
                    v[i].first--;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends