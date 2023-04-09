//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    // ✅🤝👀©
	    int kx=KnightPos[0]-1,ky=KnightPos[1]-1;
	    int tx=TargetPos[0]-1,ty=TargetPos[1]-1;
	    if(kx==tx&&ky==ty)
	    return 0;
	    int ans=0;
	    queue<pair<int,int>>q;
	    q.push({kx,ky});
	    vector<vector<bool>>vis(N,vector<bool>(N,false));
	    vis[kx][ky]=true;
	    while(!q.empty()){
	        ans++;
	        int size=q.size();
	        while(size--){
	            int x1=q.front().first;
	            int y1=q.front().second;
	            q.pop();
	            int xx[]={1,1,-1,-1,2,-2,2,-2};
	            int yy[]={2,-2,2,-2,1,1,-1,-1};
	            for(int i=0;i<8;i++){
	                int nx=x1+xx[i];
	                int ny=y1+yy[i];
	                if(nx==tx&&ny==ty)
	                return ans;
	                if(nx>=0&&nx<N&&ny>=0&&ny<N&&!vis[nx][ny]){
	                    vis[nx][ny]=true;
	                    q.push({nx,ny});
	                }
	            }
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends