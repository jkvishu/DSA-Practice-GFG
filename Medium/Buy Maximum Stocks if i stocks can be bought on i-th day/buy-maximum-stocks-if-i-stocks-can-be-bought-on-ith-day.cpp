//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        //Done in second attempt on my own with my own logic.
        /*mistake done in first attempt was that 
        i forgot to think the case where elements can be repeated and
        i was using map stl where repeated things are not allowed therefore i have to use the vector with pair to have those elements which are repeated as seprate
        hence those cases are also needed to be counted*/
        //done in 0.01 sec.
        //POTD
        //✅💯😏
        int i,s=0;
        vector<pair<int,int>>m;
        for(i=0;i<n;i++)
        {
            m.push_back({price[i],i+1});
        }
        sort(m.begin(),m.end());
        auto it=m.begin();
        while(it!=m.end()&&it->first<=k)
        {
            while(it->first<=k&&it->second>0)
            {
                k=k-it->first;
                it->second=it->second-1;
                s++;
            }
            ++it;
        }
        return s;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends