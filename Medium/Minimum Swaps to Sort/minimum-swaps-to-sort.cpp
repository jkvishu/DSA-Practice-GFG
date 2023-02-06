//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array.
	int minSwaps(vector<int>&nums)
	/*{
	    //Cyclic sort can be used here if it asked for not using extra space so i do the same .
	    // ❌😁👀🤝GFG-C.
	    int ans=0;
	    for(int i=0;i<nums.size()-1;i++){
	        int element=nums[i],c=i;
	        for(int j=i+1;j<nums.size();j++){
	            if(nums[j]<element)
	            c++;
	        }
	        swap(element,nums[c]);
	        while(c!=i){
	            c=i;
	            for(int j=i+1;j<nums.size();j++){
	            if(nums[j]<element)
	            c++;
	            }
	            swap(element,nums[c]);
	            ans++;
	        }
	    }
	    return ans;
	}*/
	{
	    //💯✅🤝
	vector<pair<int,int>> v(nums.size());
    for(int i=0;i<nums.size();i++)
    v[i]={nums[i],i};
    
    sort(v.begin(),v.end());
    
    int cnt=0;
    for(int i=0;i<nums.size();i++)
    {
        if(i==v[i].second)
        continue;
        else
        {
            cnt++;
            swap(v[i],v[v[i].second]);
            i--;
        }
    }
    
    return cnt;
	}
	/*{
	    // Code here
	    //Done in second attempt with my own logic in 0.77 sec.
	    map<int,int>m;
	    int i,n=nums.size(),temp,swap=0;
	    for(i=0;i<n;i++)
	    {
	        m[nums[i]]=i;
	    }
	    auto it=m.begin();
	    for(i=0;i<n;i++)
	    {
	        if(it->first!=nums[i])
	        {
	            temp=nums[i];
	            nums[i]=nums[it->second];
	            nums[it->second]=temp;
	            auto kl=m.find(temp);
	            kl->second=it->second;
	            swap++;
	        }
	        ++it;
	    }
	    return swap;
	}*/
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends