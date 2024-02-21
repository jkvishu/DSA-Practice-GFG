#include<bits/stdc++.h>
using namespace std;
bool func(vector<int> adj[] , vector<int> &visit , int i){
visit[i] = 0;
queue <pair<int,int>> q;
q.push({i , 0});
while(!q.empty()){
int n = q.front().first;
int c = q.front().second;
q.pop();
for(int node : adj[n]){
if(visit[node]==-1){
visit[node] = !c;
q.push({node , visit[node]});
}
else{
if(visit[n]==visit[node]) return false;
}
}
}
return true;
}

bool isPossible(vector<int> adj[] , int V){
vector <int> visit(V , -1);
for(int i = 0 ; i < V ; i++){
if(visit[i]==-1){
if(!func(adj , visit , i)) return false;
}
}
return true;
}

int main() {
    	//code
    // cout<<"Hello there I am Vishu";
    // cout<<"Welcome to my profile";
    // ©❌
    // Graph problem in easy uhhh
int t;
cin >> t;
while(t--){
int n , m;
cin >> n >> m;
vector <int> adj[n];
for(int i = 0 ; i < m ; i++){
int j , k ;
cin >> j >> k;
adj[j-1].push_back(k-1);
adj[k-1].push_back(j-1);
}
if(isPossible(adj , n)){
cout << "yes\n";
continue;
}
cout << "no\n";
}
return 0;
}