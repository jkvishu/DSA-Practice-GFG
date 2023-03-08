//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        bool check(vector<int> diff, int k, int w, int tryFor){
            int prev = 0;
            for(int i=0; i<diff.size(); i++){
                diff[i] += prev;
                prev = diff[i];
                if(diff[i] >= tryFor)
                    continue;
                k -= (tryFor - diff[i]);
                if(k < 0)
                    return 0;
                if(i+w < diff.size())
                    diff[i+w] -= (tryFor - diff[i]);
                prev = tryFor;
            }
            return 1;
        }
        long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)
        {
            //POTD ❌©👀
            vector<int> diff(n);
            diff[0] = a[0];
            int minHeight = a[0];
            for(int i=1; i<n; i++){
                diff[i] = a[i] - a[i-1];
                minHeight = min(a[i],minHeight);
            }
            
            int maxHeight = minHeight+k;
            
            long long ans;
            while(minHeight <= maxHeight){
                int tryFor = (minHeight+maxHeight)/2;
                if(check(diff, k, w, tryFor)){
                    ans = tryFor;
                    minHeight = tryFor+1;
                }
                else
                    maxHeight = tryFor-1;
            }
            return ans;
        }
       /* {
            // code here
            // Brute force solution i know to weird 👀
            // ✅💯😏
            priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
            vector<pair<long long,long long>>v;
            for(int i=0;i<a.size();i++){
                pq.push({a[i],i});
            }
            long long mn=pq.top().second;
            pair<long long,long long>temp;
            for(int i=0;i<k;i++){
                int j=0;
                while(!pq.empty()&&j<w){
                    temp=pq.top();
                    pq.pop();
                    temp.first++;
                    v.push_back(temp);
                    j++;
                }
                j=0;
                while(j<v.size()){
                    pq.push(v[j]);
                    j++;
                }
                v.clear();
            }
            while(!pq.empty()){
                if(pq.top().second==mn)
                return pq.top().first;
                pq.pop();
            }
        }*/
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,w;
        cin>>n>>k>>w;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        cout<<s.maximizeMinHeight(n,k,w,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends