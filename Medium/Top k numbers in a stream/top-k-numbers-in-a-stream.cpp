//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    /*vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        // code here
        // POTD
        // ✅💯😏
        // Brute force ha but correct ha
        vector<vector<int>>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<pair<int,int>>temp;
        temp.push_back({1,arr[0]});
        ans.push_back({arr[0]});
        for(int i=1;i<N;i++){
            int k=K;
            vector<int>tt;
            int f=1;
            while(!temp.empty()){
                if(temp.back().second==arr[i]){
                temp.back().first--;
                f=0;
                }
                pq.push({temp.back().first,temp.back().second});
                temp.pop_back();
            }
            if(f==1)
            pq.push({1,arr[i]});
            while(!pq.empty()&&k){
                tt.push_back(pq.top().second);
                temp.push_back(pq.top());
                pq.pop();
                k--;
            }
            while(!pq.empty()){
                temp.push_back(pq.top());
                pq.pop();
            }
            ans.push_back(tt);
            f=1;
        }
        return ans;
    }*/
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        //POTD
        //similar to my code but little more opimized approach because of good use of data structure choice
        unordered_map<int,int> mp;
        set<pair<int,int>> st;
        vector<vector<int>> ans;
        for(int i = 0;i<N;++i){
            vector<int> res;
            if(mp[arr[i]] > 0){
                st.erase({-mp[arr[i]],arr[i]});
            }
            mp[arr[i]]++;
            st.insert({-mp[arr[i]],arr[i]});
            int t = 0;
            for(auto j : st){
                if(t >= K){
                    break;
                }
                res.push_back(j.second);
                ++t;
            }
            ans.push_back(res);
                
        }
        return ans;
    }
    
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> a(N);
        Array::input(a,N);
        
        Solution obj;
        vector<vector<int>> res = obj.kTop(a, N, K);
        
        for(auto it:res)
            Array::print(it);
        
    }
}

// } Driver Code Ends