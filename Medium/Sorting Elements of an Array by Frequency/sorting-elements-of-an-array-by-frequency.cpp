#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
    // cout<<"Hello there I am Vishu";
    // cout<<"Welcome to my profile";
    int t;
    cin>>t;
    while(t--){
        unordered_map<int,int>m;
        vector<pair<int,int>>v;
        vector<int>ans;
        int n,x,j,k;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            m[x]++;
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
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}