//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    // Just practicing again before placement
	    vector<int>ans;
	    unordered_set<int>s;
	    if(N==1)
	    return {};
	    while(N%2==0){
	        if(s.find(2)==s.end()){
	        ans.push_back(2);
	        s.insert(2);
	        }
	        N=N/2;
	    }
	    while(N%3==0){
	        if(s.find(3)==s.end()){
	        ans.push_back(3);
	        s.insert(3);
	        }
	        N=N/3;
	    }
	    for(int i=5;i<N/2;i=i+6){
	        while(N%i==0){
	            if(s.find(i)==s.end()){
	            ans.push_back(i);
	            s.insert(i);
	            }
	            N=N/i;
	        }
	        while(N%(i+2)==0){
	            if(s.find(i+2)==s.end()){
	            ans.push_back(i+2);
	            s.insert(i+2);
	            }
	            N=N/(i+2);
	        }
	    }
	    if(N>3)
	    ans.push_back(N);
	    return ans;
	}
	/*
	// PRevious submission
	vector<int>AllPrimeFactors(int N) 
	{
	    // Code here
	    //First attempt
	    //Done on my own it uses the same concept as of prime factors just here he asked for unique numbers and he wanted them in the sorted order
	    if(N==1)
	    return {};
	    unordered_map<int,int>m;
	    vector<int>v;
	    while(N%2==0){
	        m[2]++;
	        N=N/2;
	    }
	    while(N%3==0){
	        m[3]++;
	        N=N/3;
	    }
	    for(int i=5;i*i<=N;i=i+6){
	        while(N%i==0){
	            m[i]++;
	            N=N/i;
	        }
	        while(N%(i+2)==0){
	            m[i+2]++;
	            N=N/(i+2);
	        }
	    }
	    if(N>3)
	    m[N]++;
	    auto it=m.begin();
	    while(it!=m.end()){
	        v.push_back(it->first);
	        ++it;
	    }
	    if(v.empty())
	    return {N};
	    sort(v.begin(),v.end());
	    return v;
	}
	*/
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends