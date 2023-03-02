//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}
// } Driver Code Ends


vector<int> Smallestonleft(int arr[], int n)
/*{
    // Complete the function
    // ✅💯
    // Too much complex bRute force approach 🤣.
    vector<int>v;
    vector<int>ans(n);
    priority_queue<int>pq;
    ans[0]=-1;
    pq.push(arr[0]);
    for(int i=1;i<n;i++){
        if(!pq.empty()){
            while(!pq.empty()&&pq.top()>=arr[i]){
            v.push_back(pq.top());
            pq.pop();
            }
            if(pq.empty()){
                ans[i]=-1;
                pq.push(arr[i]);
            }
            else{
                ans[i]=pq.top();
                pq.push(arr[i]);
            }
            while(v.size()!=0){
                pq.push(v.back());
                v.pop_back();
            }
        }
        else{
            ans[i]=-1;
            pq.push(arr[i]);
        }
    }
    return ans;
}*/
{
    //Let's optimize it 
    //Optimal Solution
    //🤝✅👀
    set<int>s;
    vector<int>ans;
    for(int i=0;i<n;i++){
        auto it=s.lower_bound(arr[i]);
        if(it==s.begin()){
            ans.push_back(-1);
        }
        else{
            --it;
            ans.push_back(*it);
        }
        s.insert(arr[i]);
    }
    return ans;
}