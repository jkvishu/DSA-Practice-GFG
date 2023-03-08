//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
   /* {
        // your code here
        // 1st approach using sliding window
        // Time taken 0.26 sec.
        // ✅💯😏
        int mx=arr[0];
        int mxi=0;
        vector<int>ans;
        for(int i=1;i<k;i++){
            if(arr[i]>=mx){
                mx=arr[i];
                mxi=i;
            }
        }
        ans.push_back(mx);
        int j=0;
        for(int i=k;i<n;i++){
            if(arr[j]==mx&&j==mxi){
                int k=j+1;
                mx=-1;
                while(k<=i){
                    if(arr[k]>=mx){
                        mx=arr[k];
                        mxi=k;
                    }
                    k++;
                }
            }
            else{
                if(arr[i]>=mx){
                    mx=arr[i];
                    mxi=i;
                }
            }
            ans.push_back(mx);
            j++;
        }
        return ans;
    }*/
    {
        // 2 Method to solve the problem.
        //THis is the deque approach.
        //✅🤝💯
        //Time taken 0.33 sec slower than my initiall approach 😅
        deque<int>q;
        vector<int>ans;
        for(int i=0;i<k;i++){
            while(!q.empty()&&arr[i]>=arr[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        for(int i=k;i<n;i++){
            ans.push_back(arr[q.front()]);
            while(!q.empty()&&q.front()<=i-k){
                q.pop_front();
            }
            while(!q.empty()&&arr[i]>=arr[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(arr[q.front()]);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
